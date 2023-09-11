#include <stdio.h>

void main (void)
{
    int area;
    int base = 15;
    int altura = 20;
    printf("Base:15\n");
    printf("Altura:20\n");
    area = base * altura;
    printf("El area del rectangulo con %i unidades de base y %i unidades de altura, tiene como resultado %i unidades cuadrados", base, altura, area);
}