#include <stdio.h>
#include <stdlib.h>

int main(){

	int int1, int2;
	puts("\n--Programa que transforma entero/entero a float--\n");
	puts("Ingresa una division de enteros de la siguiente forma entero/entero: ");
	scanf("%d%*[/]%d",&int1, &int2);
	printf("La division es: %f\n",(float)int1 /int2 );

	return EXIT_SUCCESS;
	
}