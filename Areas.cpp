#include <stdio.h>

void main (void)
{
	int area;
	int base;
	int altura;
	printf("Base: ");
	scanf_s("%i", &base);
	printf("Altura: ");
	scanf_s("%i", &altura);
	area = base * altura;
	printf("El area del cuadrado con %i unidades de base y %i unidades de altura, tiene como resultado %i unidades cuadrados", base, altura, area);	
}