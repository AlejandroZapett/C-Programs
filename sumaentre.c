#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, suma=0;
	puts("\n--Programa que regresa la suma entre los valores de un numero--\n");
	puts("Ingresa un numero entero: ");
	scanf("%d",&num);
	for(int i=10; i<num*10; i=i*10){
		suma=suma +(int)((num%i)/(i/10));
	}
	printf("La suma entre los numeros es: %d\n", suma);
	return EXIT_SUCCESS;
}