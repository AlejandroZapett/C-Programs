#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int m,n,i,j, suma=0;
	puts(" -- Random matrix multiplication -- ");
	puts("Ingresa los valores de m, n ,i y j separados por un espacio");
	scanf("%d %d %d %d",&m, &n, &i, &j);
	//si las columnas son igual al numero de filas se puede multiplicar
	if (n!=i){
		puts("No se puede multiplicar esas matrices");
	}
	else{
		int matrizmn[m][n], matrizij[i][j]; //Filas y colmnas
		srand(time(NULL));
		//primer matriz
		for(int f=0; f<m; f++){
			for (int c=0;c<n; c++){
				matrizmn[f][c]=rand()%11;
				printf("%d\t\t\t",matrizmn[f][c]);
			}
			printf("\n");
		}
		printf("\n");
		srand(time(NULL));
		//segunda matriz
		for(int f=0; f<i; f++){
			for (int c=0;c<j; c++){
				matrizij[f][c]=rand()%11;
				printf("%d\t\t\t",matrizmn[f][c]);
			}
			printf("\n");
		}
		printf("\n");
		//multiplicacion
		int matrizfinal[m][j];
		for(int f=0; f<m;f++){
			for(int c=0; c<j; c++){
				for(int num=0;num<n;num++){
						suma=suma+matrizmn[f][num]*matrizij[num][c];
				}
				matrizfinal[f][c]=suma;
				printf("%d\t\t\t", matrizfinal[f][c]);
				suma=0;
			}
			puts("");
		}
		printf("\n");
	}
	
}