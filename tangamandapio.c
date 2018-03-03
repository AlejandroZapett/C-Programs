#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	char numerot[100], tangamandapio[100][100];
	int i=0, num[100]; 
	double conversion;
	puts("   ----------- Tangamandapio ----------");
	do{//lectura de la cadena
		scanf("%[^\n]%*c", &numerot);
		tangamandapio[i][0]=strlen(numerot);
		for(int j=1; j<strlen(numerot)+1;j++)
			tangamandapio[i][j]=numerot[j-1];
		i=i+1;
	}while(numerot[0] != '#');
	for(int j=0; j<i-1; j++){//ciclo para repetir todos los renglones
		for(int k=1; k<tangamandapio[j][0]+1; k++){//ciclo para repetir cada columna
			switch (tangamandapio[j][k]){//conversion de signo a numeros
				case '%':
					num[k-1]=0;
					break;
				case ')':
					num[k-1]=1;
					break;
				case 126:
					num[k-1]=2;
					break;
				case '@':
					num[k-1]=3;
					break;
				case '?':
					num[k-1]=4;
					break;
				case 92:
					num[k-1]=5;
					break;
				case '$':
					num[k-1]=-1;
					break;
			}
			conversion=conversion+num[k-1]*pow(6, tangamandapio[j][0]-k);
		}
		printf("\nLa conversion es: %lf\n", conversion);
		conversion=0;
	}
	return EXIT_SUCCESS;
}