#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    double d;
    char cad0[20];

    printf("\nIngrese una cadena de caracteres: ");
    gets(cad0);
    i = atoi(cad0);
    /* La función atoi convierte una cadena de caracteres que contiene números a un valor de tipo entero.
    Si la cadena comienza con otro carácter o no contiene números, regresa 0. */
    printf("\n%s \t %d", cad0, i + 3);
    /* Imprimimos el valor de i+3 para demostrar que i ya fue convertido a un entero. */

    printf("\nIngrese una cadena de caracteres: ");
    gets(cad0);
    d = atof(cad0);
    /* La función atof convierte una cadena de caracteres que contiene números reales a un valor de tipo double.
    Si la cadena comienza con otro carácter o no contiene números, regresa 0.0. */
    printf("\n%s \t %.2lf", cad0, d + 1.50);

    return 0;
}
