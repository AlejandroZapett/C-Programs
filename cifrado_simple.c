#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cifrado_simple(int, char[]);

int main(){
	int columnas, matriz[100][200], contadorR=0, contador2=0;
	char frase[200];
	puts("   ---------- Cifrado simple ----------");
	puts("Ingresa el numero de columnas (2-20) y la frase a descifrar, separador por enter");
	puts("Para terminar ingresa un 0");
	for(int k=0; k<100; k++){// para limpiar la matriz
		for(int l=0; l<200; l++)
			matriz[k][l]='{';
	}
	do{//para ingresar todos los datos
		scanf("%d%*c", &columnas);
		if(columnas>20){
			puts("ingresa un numero de columnas menor a 20 y mayor a 0 para continuar");
			continue;
		}
		if(columnas !=0){
			scanf("%[^\n]%*c", frase);
			cifrado_simple(columnas, frase);
			for(int j=0; j<strlen(frase); j++)
				matriz[contadorR][j]=frase[j];
			contadorR=contadorR+1;
		}
	}while(columnas != 0);
	puts("----------"); //para imprimir los resultados
	for(int k=0; k<contadorR; k++){//recorrer los renglones
		while(matriz[k][contador2]!= '{'){
			printf("%c", matriz[k][contador2]);
			contador2=contador2+1;
		}
		puts("");
		contador2=0;
	}
	puts("----------");
	return EXIT_SUCCESS;
}

void cifrado_simple(int columnas, char frase[]){
	char matriz[columnas+1][columnas];
	int contador=0;
	for(int i=0; i<columnas+1; i++){ //organizando la frase en una matriz
		for(int j=0; j<columnas; j++){
			matriz[i][j]=frase[contador];
			contador=contador+1;//contador de toda la frase
		}
	}
	contador=0;
	for(int i=0; i<columnas; i++){//reconstruyendo la frase original
		for(int j=i, k=0; j >= 0 ; j--, k++){
			frase[contador]=matriz[k][j];
			contador=contador+1;
		}
	}
	for(int i=0; i<columnas+1; i++){
		for(int j=columnas-1, k=1; j>=i; j--, k++){
			frase[contador]=matriz[i+k][j];
			contador=contador+1;
		}
	}
}