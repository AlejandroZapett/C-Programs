#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int mcm(int, int);

int main(){
	int a, b;
	puts(" -- Minimo comun multiplo -- ");
	puts("Ingresa dos numeros: ");
	scanf("%d %d", &a, &b);
	printf("El minimo comun multiplo es: %d\n", mcm(a,b));
	return EXIT_SUCCESS;
}

int mcm(int a, int b){
	int mult;
	for(int i=a*b; i>1; i--){
		if(i%a==0 && i%b==0)
			mult=i;
	}
	return mult;
}