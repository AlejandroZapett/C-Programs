#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	puts("\n -- Programa que imprime la tabla potagórica --\n");
	puts("Ingresa un valor entero n: ");
	scanf("%d",&n);
	for(int i=0; i<=n; i++){
		for(int j=0; j<=n;j++){
			if(i==0 && j==0){
				printf("     ");
				continue;
			}
			else if(i!=0){
				if(j==0){
					printf("%2d   ", i*(j+1));
					continue;
				}
				printf("%2d   ", i*j);
			}
			else if(i ==0){
				printf("%2d   ", j);
			}
		}
		printf("\n");

	}
	return EXIT_SUCCESS;
}