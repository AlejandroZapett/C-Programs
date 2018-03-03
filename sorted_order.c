#include <stdio.h> 

int main(){
	puts(" -- Sorted order -- ");
	puts("Ingresa numeros, para terminar ingresa 0");
	int arreglo[100], cont=0, inter;
	do{//lectura del arreglo
		scanf("%d", &arreglo[cont]);
		cont=cont+1;
	}while (arreglo[cont-1]!=0);
	for(int i=0; i<cont-2;i++){//ordenamiento del arreglo
		for(int j=0; j<cont-2-i; j++){
			if (arreglo[j]>arreglo[j+1]){
				inter=arreglo[j];
				arreglo[j]=arreglo[j+1];
				arreglo[j+1]=inter;
			}
		}
	}
	puts("El arreglo ordenado es: ");
	for(int i=0; i<cont-1;i++)
		printf("%d\t",arreglo[i]);
	puts("");
}