#include <stdio.h>
#include <stdlib.h>

int main(){
	int renglones, blancos, i, j, c=1;
	puts(" -- Triangulo de pascal-- ");
	puts("Ingresa el numero de lineas del Triangulo");
	scanf("%d",&renglones);
	for(i=0; i< renglones; i++){
		for(blancos=1; blancos<=renglones-i;blancos++){ //imprime los espacios en blanco
			printf("  ");
		}
		for(j=0; j<=i; j++){ //indica las columnas
			if(j==0 || i ==0){
				c = 1;
			}
			else{
				c=c*(i-j+1)/j;
			}
			printf("% 4d", c);
		}
		puts("");
	}

	return EXIT_SUCCESS;
}