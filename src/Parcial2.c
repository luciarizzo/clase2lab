/*
 ============================================================================
 Name        : Parcial2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int acumulador=0;
	int numero;
	int contador=0;
	float promedio;
	while(1)
	{
		printf("Ingrese un n�mero: ");
		scanf("%d",&numero);
		if(numero!=999)
		{
			acumulador = acumulador + numero;
			contador++;
		}
		else
		{
			break;
		}
	}
	promedio = (float) acumulador / contador;
	printf("\nEl promedio es: %f", promedio);
}
