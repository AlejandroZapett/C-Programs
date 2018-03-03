#include <stdio.h>
#include <stdlib.h>

int cuantos_dias(int, int);

int main (){
	int mes, anio;
	puts(" -- Cuantos dias -- ");
	puts("Ingresa un mes y un anio: ");
	scanf("%d %d", &mes, &anio);
	int dias=cuantos_dias(mes, anio);
	printf("El numero de dias es: %d\n", dias);
	return EXIT_SUCCESS;
}

int cuantos_dias(int mes, int anio){
	int dias, j=1;
	if (anio%4 != 0){ //años no bisienstos
		for(int i=1; i<=mes;i++){ //-1 es 31 1 es 30
			if (mes==2)
				return 28;
			if (i==8)
				continue;
			j=j*-1;
		}
	}
	else{ //años bisiestos
		for(int i=1; i<=mes;i++){ //-1 es 31 1 es 30
			if (mes==2)
				return 29;
			if (i==8)
				continue;
			j=j*-1;
		}
	}
	if (j==1){// conversion
		dias = 30;
	}
	else{
		dias = 31;
	}
	return dias;
}