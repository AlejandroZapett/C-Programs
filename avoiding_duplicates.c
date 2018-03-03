#include <stdio.h>

int main(){
	int arreglo[100], cont_rep=0, i=0;
	char tecla= ' ';
	puts(" -- Avoiding duplicates --");
	puts("Ingresa valores, para terminar ingresa un linea en blanco: ");
	while(tecla != '\n'){
		scanf("%d%c", &arreglo[i], &tecla);
		for(int j=0; j<i; j++){
			if (arreglo[i]==arreglo[j]){
				cont_rep=cont_rep+1;
				i=i-1;
			}
		}
		i++;
	}

	for(int j=0; j<i; j++)
		printf("%d\t", arreglo[j]);
	printf("\n El numero de repeticiones de numeros fue : %d\n",cont_rep);
}