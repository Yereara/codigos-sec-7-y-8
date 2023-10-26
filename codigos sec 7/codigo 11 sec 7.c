#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char p, cad[50];
    int n;

    printf("\nIngrese la cadena de caracteres (máximo 50): ");
    gets(cad);

    printf("\nIngrese la posición en la cadena que desea verificar: ");
    scanf("%d", &n);

    if (n >= 1 && n <= strlen(cad)) // Corregido el rango válido
    {
        p = cad[n - 1]; // Ajustado el índice a 0-based

        if (islower(p))
        {
            printf("\n%c es una letra minúscula", p);
        }
        else
        {
            printf("\n%c no es una letra minúscula", p);
        }
    }
    else
    {
        printf("\nEl valor ingresado de n es incorrecto o fuera de rango.");
    }

    return 0;
}
