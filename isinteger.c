#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	char string[100];
	int j=0, num[100], k=0, mult=1, x10=1, n=0;
	bool ver=true;
	puts(" --------- Is Integer? -----------");
	puts("ingresa una cadena:");
	scanf("%[^\n]%*c", string);
	for(int j=0; j<strlen(string); j++){
		if (string[j]>=48 && string[j]<=57){
			num[k]=((int)string[j])-48;
			k=k+1;
			x10=x10*10;
		}else if(string[0]==43){
			mult=1;
		}else if(string[0]==45){
			mult=-1;
		}else if(string[j]==32 ){
			continue;
		}else {
			puts("No puede ser convertido a entero");
			ver=false;
			break;
		}
	}
	if(ver){
		for(int i=0; i<k; i++, x10=x10/10)
			n=n+x10*(num[i])/10;
		n=n*mult;
		printf("Se puede convertir a entero: %d\n",n);	
	}
	return EXIT_SUCCESS;
}