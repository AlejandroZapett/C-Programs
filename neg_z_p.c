#include <stdio.h>

int main(){
	int arreglo[100], i=0, inter;
	char tecla= ' ';
	puts(" -- Negatives, zeros, positives --");
	puts("Ingresa valores, para terminar ingresa un linea en blanco: ");
	while(tecla != '\n'){
		scanf("%d%c", &arreglo[i], &tecla);
		i++;
	}
	for(int j=0; j<3; j++){
		for (int k=0; k<i; k++){
			if(arreglo[k]<0 && j == 0)
				printf("%d\n", arreglo[k]);
			if(arreglo[k]==0 && j == 1)
				printf("%d\n",arreglo[k]);
			if(arreglo[k]>0 && j==2)
				printf("%d\n",arreglo[k]);
		}	
	}
	puts("");
}