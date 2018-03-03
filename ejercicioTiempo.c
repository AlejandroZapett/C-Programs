#include <stdio.h>
#include <stdlib.h>

int main(){
	int dias, horas, minutos, segundos;

	puts("--Programa que convierte el tiempo a segundos--\n");
	puts("Ingresa los siguiente: dias horas, minutos, segundos");
	scanf("%d %d %d %d", &dias,&horas, &minutos, &segundos);
	segundos=(dias*86400)+(horas*3600)+(minutos*60)+(segundos);
	printf("El tiempo que ingresaste es %d segundos\n", segundos);
}