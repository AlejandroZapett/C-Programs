#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void sin_espacios(char[]);
char negacion(char);
char evaluacion_par(char, char, char);

int main(){
	char expresion[100];
	int cont=0, cont2=0, j=0, k=0, m=0;
	puts("   ----------- Expresiones booleanas ----------");
	scanf("%[^\n]",&expresion);
	sin_espacios(expresion);
	for(int i=0; i<strlen(expresion); i++){//para contar parentesis
		if(expresion[i]=='(')
			cont=cont+1;
	}
	for(int l=0; l<cont; l++){
		cont2=l;
		j=0;
		while(cont2<cont){//para encontrar los parentesis
			if(expresion[j]=='(')
				cont2=cont2+1;
			j=j+1;
		}
		j=j-1;
		k=j;
		while(expresion[k]!=')'){//para terminar de encontrar el parentesis
			if(expresion[k]=='!'){//para negar una variable
				expresion[k]=negacion(expresion[k+1]);
				expresion[k+1]=' ';
				sin_espacios(expresion);
			}
			k=k+1;
		}
		if(k-j == 3){//para operar dos terminos
			expresion[j]=' ';
			expresion[k]=' ';
		}else if(k-j == 4){
			expresion[j]=' ';
			expresion[k]=' ';
			expresion[j+1]=evaluacion_par(expresion[j+1], expresion[j+2],expresion[j+3]);
			expresion[j+2]=' ';
			expresion[j+3]=' ';
		}else if(k-j > 4){//para operar mas de dos terminos
			m=j+3;
			while(m<k){
				expresion[j+1]=evaluacion_par(expresion[j+1], expresion[m-1],expresion[m]);
				expresion[m-1]=' ';
				expresion[m]=' ';
				m=m+2;
			}
			expresion[j]=' ';
			expresion[k]=' ';
		}else if(k-j == 2){
			expresion[j]=' ';
			expresion[k]=' ';
		}
		sin_espacios(expresion);
	}
	if(strlen(expresion)==2){ //operaciones sin parentesis
		expresion[0]=negacion(expresion[1]);
		expresion[1]=' ';
	}else if (strlen(expresion)>=3){
		m=2;
			while(m<strlen(expresion)){
				expresion[0]=evaluacion_par(expresion[0], expresion[m-1],expresion[m]);
				expresion[m-1]=' ';
				expresion[m]=' ';
				m=m+2;
			}
	}
	sin_espacios(expresion);
	puts(expresion);
	return EXIT_SUCCESS;
}

void sin_espacios(char expresion[]){
	int cont2=0;
	char expSE[100];
	for(int i=0; i<strlen(expresion); i++){
		if(expresion[i]!=' '){
			expresion[cont2]=expresion[i];
			cont2=cont2+1;
		}
	}
	for(int i=cont2; i<strlen(expresion); i++){
		expresion[i]=NULL;
	}
}

char evaluacion_par(char val1, char operador, char val2){
	bool valor1, valor2;
	switch(val1){
		case 'V':
			valor1 = true;
			break;
		case 'F':
			valor1 = false;
			break;
	}
	switch(val2){
		case 'V':
			valor2 = true;
			break;
		case 'F':
			valor2 = false;
			break;
	}
	switch(operador){
		case '&':
			if(valor1==true && valor2==true)
				return 'V';
			else
				return 'F';
		case '|':
			if(valor1==true || valor2==true)
				return 'V';
			else
				return 'F';
	}
}

char negacion(char valor){
	if(valor == 'V')
		valor= 'F';
	else
		valor = 'V';
	return valor;
}