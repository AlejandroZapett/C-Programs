#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float suma=1;
	int n;
	puts("\n -- Programa que imprime una serie 1/n*11 --\n");
	puts("Ingresa un valor entero n: ");
	scanf("%d",&n);
	for (int i=0; i<=n; i++){
		if(i==0){
			printf("1");
			continue;
		}
		if(i==1){
			continue;
		}
		printf("%+.0f/%d",pow(-1,i),i*11);
		suma= suma+(pow(-1,i+1))/(i*11);
	}
	printf("\nEl resultado es:%f\n",suma );
	return EXIT_SUCCESS;
}