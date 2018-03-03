#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	puts("\n--Programa que regresa un numero de reversa--\n");
	puts("Ingresa un numero entero: ");
	scanf("%d",&num);
	for(int i=10; i<num*10; i=i*10){
		printf("%d", (int)((num%i)/(i/10)));
	}
	printf("\n");
	return EXIT_SUCCESS;
}