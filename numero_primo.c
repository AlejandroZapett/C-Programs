#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool primo(int);

int main(){
	int valor;
	puts(" -- Numeros primos -- ");
	puts("Ingresa algun valor: ");
	scanf("%d", &valor);
	bool n= primo(valor);
	if (n == true)
		printf("Es un numero primo\n");
	else
		printf("No es primo\n");

}

bool primo(int valor){
	int contador=0;
	for(int i=1; i<=valor; i++){
		if (valor%i==0)
			contador++;
	}
	if (contador==2){
		return true;
	}
		return false;
}