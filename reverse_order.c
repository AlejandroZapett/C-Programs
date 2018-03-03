#include<stdio.h>
#include <stdlib.h>

int main(){
	puts("-- Reverse order --");
	int arreglo[100], i=0;
	do{
		scanf("%d", &arreglo[i]);
		i++;
	}while(arreglo[i-1]!=0);

	for(int j=i-2; j>=0;j--){
		printf("%d",arreglo[j]);
	}
	printf("\n");
	return EXIT_SUCCESS; 
}