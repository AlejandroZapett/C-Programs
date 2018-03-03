#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	float signo=-1, casilla;
	int n, n2;
	char columna;
	
	puts("\n -- Programa que te indica si una posición del tablero es blanca o negra --\n");
	puts("Ingresa un valor de casilla: ");
	scanf("%c%d",&columna,&n);
	switch (columna){
		case 'a':
			n2=1;
			break;
		case 'b':
			n2=2;
			break;
		case 'c':
			n2=3;
			break;
		case 'd':
			n2=4;
			break;
		case 'e':
			n2=5;
			break;
		case 'f':
			n2=6;
			break;
		case 'g':
			n2=7;
			break;
		case 'h':
			n2=8;
			break;
	}
	for (int i=1; i<=n2;i++){ //columnas
		for(int j=1; j<=n;j++){ //filas
			signo=signo*-1;
			casilla=signo;
		}
		if (n%2==0){
			signo=signo*-1;
		}
	}
	if (casilla==-1){
		printf("La casilla es blanca\n");
	}
	else if(casilla==1){
		printf("La casilla es negra\n");
	}
	
	return EXIT_SUCCESS;
}