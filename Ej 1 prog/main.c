#include <stdio.h>
#include <stdlib.h>

/*
Crear una función llamada calcularIVA que reciba como parámetro el precio bruto de un producto
y devuelva el valor del impuesto (el IVA es 21%). Realizar la llamada desde main. *

*/

int impuesto(float precio, int porcentaje);

int main()
{

    float precio;
    int porcentaje = 21;
    float resultado;

    printf("\nIngrese un precio:");
    scanf("%f",&precio);

    resultado=impuesto(precio,porcentaje);

    printf("\nEl valor del impuesto es: %.2f",resultado);

    return 0;
}

int impuesto (float precio,int porcentaje)
{
    float Impuesto;

    Impuesto = porcentaje;

    Impuesto = precio * (Impuesto/100);

    return Impuesto;
}


