#include <stdio.h>
#include <stdlib.h>

int contador_digit(int);

int main(){
	puts("   ----------- Paginas de libros ----------");
	int i=0;
	double contadorPag=0, digitos[10], digit;
	char hash=NULL;
	while(hash!= '#'){
		if(scanf("%lf",&digitos[i])==1)
			i=i+1;
		else 
			scanf("%c", &hash);
	}
	puts("");
	for(int j=0; j<i; j++){
		contadorPag=0;
		while(digitos[j]>0){
			contadorPag=contadorPag+1;
			digit=contador_digit(contadorPag);

			digitos[j]=digitos[j]-digit;
			//printf("%f %f \n",digitos[j], digit);
		}
		if(digitos[j]!=0)
			printf("Imposible!\n");
		else
			printf("%.0lf\n", contadorPag);
	}
	return EXIT_SUCCESS;
}


int contador_digit(int num){
	int cont=1;
	while(num/10!=0){
		cont=cont+1;
		num=num/10;
	}
	return cont;
}