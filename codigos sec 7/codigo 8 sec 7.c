#include <stdio.h>
#include <string.h>
#include <ctype.h>

void minymay(char *cadena); // Prototipo de función

int main(void)
{
    int i, n;
    char FRA[20][50]; // Arreglo bidimensional para almacenar las cadenas
    
    printf("\nIngrese el número de filas del arreglo: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        printf("Ingrese la línea %d de texto: ", i + 1);
        fflush(stdin);
        gets(FRA[i]);
    }
    
    printf("\n\n");
    
    for (i = 0; i < n; i++)
        minymay(FRA[i]);
    
    return 0;
}

void minymay(char *cadena)
{
    int i = 0, mi = 0, ma = 0;
    
    while (cadena[i] != '\0')
    {
        if (islower(cadena[i]))
            mi++;
        else if (isupper(cadena[i]))
            ma++;
        i++;
    }
    
    printf("\nNúmero de letras minúsculas: %d", mi);
    printf("\nNúmero de letras mayúsculas: %d", ma);
}
