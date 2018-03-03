#include <stdio.h>
#include <stdlib.h>

int main(){
	int ejecuciones, a1, b1, a2, b2, cont=0;
	puts("   ----------- Procesamiento digital ----------");
	puts("Ingresa el numero de veces que el programa debe ejecutarse");
	scanf("%d", &ejecuciones);
	for(int veces=0; veces<ejecuciones; veces++){
		puts("Ingresa las dimensiones de la matriz A");
		scanf("%d %d",&a1, &b1);
		char matrizA[a1][b1];
		puts("Ingresa los valores de la matriz A");
		while(getchar()!='\n');//para limpiar el buffer
		for(int i=0; i<a1; i++){//valores de la matriz A
			for(int j=0; j<b1; j++){
				scanf("%s", &matrizA[i][j]);
				while(getchar()!='\n');
			}
		}
		puts("Ingresa las dimensiones de la matriz B");
		scanf("%d %d", &a2, &b2);
		char matrizB[a2][b2];
		puts("Ingresa los valores de la matriz B");
		while(getchar()!='\n');
		for(int i=0; i<a2; i++){//valores de la matriz B
			for(int j=0; j<b2; j++){
				scanf("%c", &matrizB[i][j]);
				while(getchar()!='\n');
			}
		}
		for(int i=0; i<a2-a1+1; i++){//algoritmo de comparacion
			for(int j=0; j<b2-b1+1; j++){
				cont=0;
				for(int k=0; k<a1; k++){
					for(int l=0; l<b1; l++){
						if(matrizB[i+k][j+l]==matrizA[k][l])
							cont=cont+1;
					}
				}
				if(cont==a1*b1){
					for(int k=0; k<a1; k++){
						for(int l=0; l<b1; l++){
							if (matrizB[i+k][j+l]=='1')
								matrizB[i+k][j+l]='2';
							else if(matrizB[i+k][j+l]=='0')
								matrizB[i+k][j+l]='*';
						}
					}
				}


			}
		}
		for(int i=0; i<a2; i++){//imprimir MB
			for(int j=0; j<b2; j++){
				printf("%c ", matrizB[i][j]);
			}
			puts("");
		}
	}
	return EXIT_SUCCESS;
}