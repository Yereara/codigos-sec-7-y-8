#include <stdio.h>
#include <stdlib.h> // Incluye la librería necesaria para atof

int main(void)
{
    char c, cad[10];
    int i = 0;
    float sum = 0.0;

    printf("\nDesea ingresar una cadena de caracteres (S/N)? ");
    c = getchar();

    while (c == 'S' || c == 's') // Añadido soporte para 's' (minúscula)
    {
        printf("\nIngrese la cadena de caracteres: ");
        fflush(stdin);
        gets(cad);

        // Utiliza atof para convertir la cadena a un número real
        sum += atof(cad);
        i++;

        printf("\nDesea ingresar otra cadena de caracteres (S/N)? ");
        c = getchar();
    }

    if (i > 0) // Evita la división por cero si no se ingresa ningún número
    {
        printf("\nSuma: %.2f", sum);
        printf("\nPromedio: %.2f", sum / i);
    }
    else
    {
        printf("\nNo se ingresaron números para calcular la suma y el promedio.");
    }

    return 0;
}
