#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int next_primo(int);
bool primo(int);

int main(){
	int valor;
	puts(" -- Next prime -- ");
	puts("Ingresa algun valor: ");
	scanf("%d", &valor);
	int sprimo = next_primo(valor);
	printf("El siguiente numero primo es: %d\n", sprimo);
}

int next_primo(int valor){
	do{
		valor=valor+1;
	}while(primo(valor)==false);
	
	return valor;
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