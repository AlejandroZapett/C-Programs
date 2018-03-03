#include<stdio.h>
#include <stdlib.h>

int main(){
	long long int nums[50] = {1, 3, 5}; 
	int suma=9;
	puts("-- Filling an array --");
	for(int i=0; i<28;i++){
		nums[i+3]=suma;
		suma=suma+nums[i+3];
	}
	for(int i=0; i<31;i++){
		printf("%d %lld\n",i,nums[i]);
	}
}