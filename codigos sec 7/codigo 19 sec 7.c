#include <stdio.h>
#include <string.h>

int cuentap(char *);

int main(void)
{
    char fra[100]; // Aumenta el tamaño del array para manejar cadenas más largas.
    printf("\nIngrese la línea de texto: ");
    fgets(fra, sizeof(fra), stdin);

    int numPalabras = cuentap(fra);
    printf("La línea de texto tiene %d palabras\n", numPalabras);

    return 0;
}

int cuentap(char *cad)
{
    int contador = 0;
    int dentroDePalabra = 0;

    for (int i = 0; cad[i] != '\0'; i++)
    {
        if (isalpha(cad[i])) // Si el caracter es una letra.
        {
            if (!dentroDePalabra)
            {
                contador++; // Comienza una nueva palabra.
                dentroDePalabra = 1; // Marcar que estamos dentro de una palabra.
            }
        }
        else
        {
            dentroDePalabra = 0; // Marcar que estamos fuera de una palabra.
        }
    }

    return contador;
}
