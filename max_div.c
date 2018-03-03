#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int max_divisor(int, int);

int main(){
	int div[2];
	puts("-- Lowest Terms --");
	puts("Ingresa una división separada por un espacio (a b) :");
	scanf("%d %d",&div[0],&div[1]);
	int max_div = max_divisor(div[0], div[1]);
	printf("%d %d\n",div[0]/max_div, div[1]/max_div);

}

int max_divisor(int numerador, int denominador){
	int div[2] = {numerador, denominador};
	int max_div=1;
	for(int i=1; i<div[0] && div[1];i++){
			if(div[0]%i || div[1]%i==0){
				max_div=i;
		}
	}
	return max_div;
}