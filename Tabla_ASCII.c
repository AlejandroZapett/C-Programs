#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	puts("Tabla ASCII");
	for(int i=65; i<=90; i++)
		printf("%d : %c\n",i,i);
	puts("-----");
	for(int i=97; i<=122; i++)
		printf("%d : %c\n",i,i);
	return EXIT_SUCCESS;
}