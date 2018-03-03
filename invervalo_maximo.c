#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char espacio;
	int num;
	puts("   ----------- Intervalo maximo ----------");
	puts("Ingrese el numero de arreglos que se analizaran, seguido de lo arreglos");
	scanf("%d",&num);
	int intervalos[num][100], j=0, sumaT[3], suma;
	for(int i=0; i<num; i++){ //lectura de las cadenas
		j=1;
		espacio=NULL;
		while(espacio != '\n'){
			scanf("%d,%[\n]",&intervalos[i][j],&espacio);
			j=j+1;
		}
		intervalos[i][0]=j;
	}
	for(int i=0; i<num; i++){//cada renglon
		j=0;
		sumaT[0]=intervalos[i][1];
		for(int l=1; l<intervalos[i][0];l++){//ciclo para comparar la suma de cada numero sucesivo
			suma=0;
			for(int k=l; k<intervalos[i][0];k++){
				suma=suma+intervalos[i][k];
				if (suma > sumaT[0]){
					sumaT[0]=suma;
					sumaT[1]=l-1;
					sumaT[2]=k-1;
				}
			}
		}
		printf("%d-%d: %d\n",sumaT[1], sumaT[2], sumaT[0]);
	}
	return EXIT_SUCCESS;
}