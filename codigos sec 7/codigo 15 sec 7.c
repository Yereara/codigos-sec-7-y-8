#include <stdio.h>
#include <ctype.h>

void interpreta(char *);

int main(void)
{
    char cad[50];
    
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);

    interpreta(cad);

    return 0;
}

void interpreta(char *cadena)
{
    int i = 0;
    while (cadena[i] != '\0')
    {
        if (isalpha(cadena[i]))
        {
            int k = cadena[i] - '0'; // Convierte el dígito en un número entero

            if (k > 0 && k <= 9)
            {
                for (int j = 0; j < k; j++)
                {
                    putchar(cadena[i - 1]); // Imprime la letra k veces
                }
            }
        }
        i++;
    }
    putchar('\n'); // Agrega una nueva línea al final
}
