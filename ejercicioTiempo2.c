#include <stdio.h>
#include <stdlib.h>

int main(){
	int dias, horas, minutos, segundos, tiempo;
	puts("\n--Programa que convierte tiempo a DD:HH:MM:SS--\n");
	puts("Ingresa un valor de tiempo en segundos: ");
	scanf("%d",&tiempo);
	dias= tiempo/86400;
	tiempo=tiempo%86400;
	horas= tiempo/3600;
	tiempo=tiempo%3600;
	minutos=tiempo/60;
	tiempo=tiempo%60;
	segundos=tiempo;
	printf("Es tiempo es %02d:%02d:%02d:%02d\n", dias, horas, minutos, segundos);

	return EXIT_SUCCESS;
}