#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

2. Crear una función que se llame reemplazarCaracter que reciba una cadena de caracteres como primer parámetro
, como segundo parámetro el carácter a reemplazar y como tercero el nuevo carácter y
devuelva la cantidad de veces se reemplazo el carácter. int reemplazarCaracter(char [], char, char); *

*/

int reemplazarCaracter(char cadena[],char caracter,char nuevoCaracter);

int main()
{
    char cadena[20];
    char caracter;
    char nuevoCaracter;

    int cantidad;

    printf("Ingrese una palabra: ");
    fflush(stdin);
    fgets(cadena, 20, stdin);
    cadena[strlen(cadena) - 1] = '\0';

    printf("Ingrese el caracter a reemplazar");
    scanf("%c",&caracter);

    printf("Ingrese el nuevo caracter");
    fflush(stdin);
    scanf("%c",&nuevoCaracter);

    cantidad = reemplazarCaracter(cadena,caracter,nuevoCaracter);

    printf("\nCantidad de veces que se reemplazo el caracter: %d\n\n", cantidad);

    return 0;
}

int reemplazarCaracter(char cadena[],char caracter,char nuevoCaracter)
{
    int cantidad;
    int s;
    int i;

    s = strlen(cadena);

    for( i=0; i < s; i++)
    {
        if(cadena[i] == caracter)
        {
            cadena[i] = nuevoCaracter;
            cantidad++;
        }
    }

    return cantidad;

}
