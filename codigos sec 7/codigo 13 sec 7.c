#include <stdio.h>

int cuenta(char *); // Prototipo de función

int main(void)
{
    int i;
    char cad[50];

    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);

    i = cuenta(cad);

    printf("\nLongitud de la cadena: %d", i);

    return 0;
}

int cuenta(char *cadena)
{
    int c = 0;

    while (cadena[c] != '\0') // Corregido el operador de negación
    {
        c++;
    }

    return c;
}
