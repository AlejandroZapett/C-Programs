#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, suma=0, contador=0;
	puts("\n -- Programa que calcula el promedio --\n");
	do{
		puts("Ingresa un numero (para terminar el proceso ingresa 0):");
		scanf("%d",&n);
		suma = suma+n;
		contador=contador+1;
		}while(n != 0);
	printf("\n El promedio es: %f \n", (float)suma/(contador-1));
	return EXIT_SUCCESS;
}