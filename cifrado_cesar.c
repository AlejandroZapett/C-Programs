#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cifrado_cesar(int, int, char[]);
int num(char[]);

int main(){
	puts("   ---------- Cifrado Cesar ----------");
	puts("   Ingresa las frase que quieras cifrar de la siguiente manera: ");
	puts("   n:frase");
	puts("   Para terminar la entrada ingresa #");
	char frase[100], matriz[100][100];
	int i=0, n, contador=0, k=0, contador2=0;
	//para limpiar la matriz:
	for(int k=0; k<100; k++){
		for(int l=0; l<100; l++)
			matriz[k][l]='{';
	}
	//para ingresar y codificar los datos:
	do{
		fflush(stdin);
		scanf("%[^\n]%*c", frase);
		n=num(frase);
		cifrado_cesar(n, (int)strlen(frase), frase);
		for(int j=0; j<strlen(frase); j++){
			matriz[i][j]=frase[j];
		}
		i=i+1;
	}while(frase[0] != '#');
	//para imprimir los resultados:
	puts("----------");
	for(int k=0; k<i-1; k++){//recorrer los renglones
		while(matriz[k][contador]!= ':')//para evitar los numeros y ':'
			contador=contador+1;
		while(matriz[k][contador2]!= '{')
			contador2=contador2+1;
		for(int l=contador+1; l<contador2; l++)//para imprimir cada linea
			printf("%c", matriz[k][l]);
		puts("");
		contador=0;
		contador2=0;
	}
	puts("");
	return EXIT_SUCCESS;
}

void cifrado_cesar(int n, int longuitud, char frase[]){
	int contador=0;
	while(frase[contador]!=':'){ //para evitar los numeros hasta los':'
		contador=contador+1;
	}
	if (n>=0){//para n postivo
	for(int i=contador+1; i<longuitud; i++){
		for(int j=0; j<n; j++){//desplazamiento dentro de las frases
			if(frase[i] >= 65 && frase[i] < 90){//para letras mayúsuclas
				frase[i]=frase[i]+1;
			}else if(frase[i]==90){//para repetir el ciclo
				frase[i]=65;
			}else if(frase[i] >= 97 && frase[i] <122){//letras minúsculas
				frase[i]=frase[i]+1;	
			}else if(frase[i]==122){//para repetir el ciclo
				frase[i]=97;
			}else if(frase[i] >= 48 && frase[i] <57){//para numeros
				frase[i]=frase[i]+1;
			}else if(frase[i]==57){//para repetir el ciclo
				frase[i]=48;
			}
		}
		}		
	}else if (n<0){ //para n negativo
	for(int i=contador+1; i<longuitud; i++){
		for(int j=n; j<0; j++){//desplazamiento dentro de las frases
			if(frase[i] > 65 && frase[i] <= 90){//para letras mayúsuclas
				frase[i]=frase[i]-1;
			}else if(frase[i]==65){//para repetir el ciclo
				frase[i]=90;
			}else if(frase[i] > 97 && frase[i] <= 122){//letras minúsculas
				frase[i]=frase[i]-1;	
			}else if(frase[i]==97){//para repetir el ciclo
				frase[i]=122;
			}else if(frase[i] > 48 && frase[i] <= 57){//numeros
				frase[i]=frase[i]-1;	
			}else if(frase[i]==48){//para repetir el ciclo
				frase[i]=57;
		}
	}
}
}
}

int num(char frase[]){
	int i=0, contador=0, n=0, mult=1;
	if(frase != '#'){
		if(frase[i]=='-'){//para n negativo
			while(frase[i]!=':'){
				i=i+1;
				contador=contador+1;
				mult=mult*10;
			}
			for(int m=mult/10, i=1; i<contador; i++, m=m/10)
				n=n+(m*(((int)frase[i])-48))/10;
			n=-1*n;
		}else { //para n postiivo
			while(frase[i]!=':'){
				contador=contador+1;
				mult=mult*10;
				i=i+1;
			}
			for(int m=mult, i=0; i<contador; i++, m=m/10)
				n=n+(m*(((int)frase[i])-48))/10;
		}
	}
	return n;
}




