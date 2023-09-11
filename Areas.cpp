#include <stdio.h>

void main (void)
{
    int area;
    int radio;
    int diametro;
    printf("Radio: ");
    scanf_s("%i", &radio);
    area = radio * 3.14;
    diametro = 2 * radio;
    printf("El area del circulo con %i unidades de radio y %i unidades de diametro, tiene como resultado %i unidades cuadrados", radio, diametro, area);
}