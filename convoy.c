#include <stdio.h>
#include <stdlib.h>

int main(){
	int peso, distancia, num, w=0;
	float tiempo=0;
	puts("   --------- Convoy ----------");
	puts("Ingresa peso máximo, distancia y número de vahículos: ");
	scanf("%d %d %d", &peso, &distancia, &num);
	printf("Ingresa el peso y la valocidad de los %d vahículos\n", num);
	int info[num][2], i=0, cont=0, min, velocidad;
	for (int i=0; i<num; i++)
		scanf("%d %d", &info[i][0],&info[i][1]);
	while(i<num){
		while(w+info[i][0]<=peso){
			w=w+info[i][0];
			i=i+1;
		}
		velocidad=info[i-1][1];
		for(int j=cont; j<i; j++){
			for(int k=cont; k<i; k++){
				if(info[k][1]<velocidad)
					velocidad=info[k][1];
			}
		}
		tiempo=tiempo+ (float)distancia/velocidad;
		cont=i;
		w=0;
	}
	tiempo=tiempo*60;
	printf("%f\n", tiempo);
	return EXIT_SUCCESS;
}