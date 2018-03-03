#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int next_primo(int);
bool primo(int);
bool is_twin_prime(int, int);

int main(){
	int n;
	puts(" -- Numeros primos gemelos -- ");
	for(int i=1; i<=1000; i++){
		if (primo(i)==true){
			n = next_primo(i);
			if (is_twin_prime(i, n)==true){
				printf("%d %d\n",i,n);
			}
		}
	}
	return EXIT_SUCCESS;
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

bool is_twin_prime(int valor, int siguiente){
	if (siguiente-valor==2){
		return true;
	}
	return false;
}