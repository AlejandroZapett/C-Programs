#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool valid_triangle(int, int, int);

int main(){
	int a, b, c;
	puts(" -- Is it a valid triangle? -- ");
	puts("Ingresa el tamaño de los tres lados: ");
	scanf("%d %d %d",&a,&b,&c);
	if(valid_triangle(a,b,c)){
		printf("Si es posible construir un triangulo\n");
	}else{
		printf("No es posible construir un triangulo\n");
	}
	return EXIT_SUCCESS;
}

bool valid_triangle(int a, int b, int c){
	if (a+b>c && b+c>a && a+c>b)
		return true;
	else
		return false;
}