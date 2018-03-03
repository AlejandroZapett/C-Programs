#include <stdio.h>
#include <stdlib.h>

int main(){
	int num=0,nuevo, contador=0;
	puts("\n -- Programa que indica el mayor valor ingresado --\n");
	puts("Ingressa valores enteros del 0 al 100 (ingrea 0 para terminar):");
	do{
		scanf("%d",&nuevo);
		if (num>=nuevo){
			//printf("%d\n",nuevo);
			continue;
		}
		else if(nuevo>num) {
			contador=contador+1;
			num = nuevo;
			printf("  <== Update ==>\n");
		}
	}while(nuevo !=0);
	printf("El maximo valor encontrado fue %d\n",num);
	printf("El maximo valor se actualizo %d veces\n", contador);


	return EXIT_SUCCESS;
}