#include <stdio.h>
#include <string.h>

int longitud(char *cad);

int main(void)
{
    int i, n, l = -1, p, t;
    char FRA[20][50];

    printf("Ingrese el número de filas del arreglo: ");
    scanf("%d", &n);
    fflush(stdin); // Limpia el búfer de entrada.

    for (i = 0; i < n; i++)
    {
        printf("Ingrese la línea %d de texto. Máximo 50 caracteres: ", i + 1);
        fgets(FRA[i], sizeof(FRA[i]), stdin);
        // Reemplazamos el uso de gets por fgets para evitar desbordamientos de búfer.
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        t = longitud(FRA[i]);
        if (t > l)
        {
            l = t;
            p = i;
        }
    }

    printf("La cadena con mayor longitud es: %s", FRA[p]);
    printf("\nLongitud: %d\n", l);

    return 0;
}

int longitud(char *cadena)
{
    int cue = 0;
    while (cadena[cue] != '\0')
        cue++;
    return cue;
}
