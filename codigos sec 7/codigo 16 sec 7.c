#include <stdio.h>
#include <string.h>

int contarSubcadenas(const char *cadena, const char *subcadena);

int main(void)
{
    char cad1[50], cad2[50];
    
    printf("\nIngrese la primera cadena de caracteres: ");
    gets(cad1);
    
    printf("\nIngrese la cadena a buscar: ");
    gets(cad2);

    int resultado = contarSubcadenas(cad1, cad2);

    printf("\nEl número de veces que aparece la segunda cadena es: %d", resultado);

    return 0;
}

int contarSubcadenas(const char *cadena, const char *subcadena)
{
    int contador = 0;
    int longitudCadena = strlen(cadena);
    int longitudSubcadena = strlen(subcadena);

    if (longitudSubcadena == 0)
    {
        return 0; // Subcadena vacía, no se encontrará en ninguna parte.
    }

    for (int i = 0; i <= longitudCadena - longitudSubcadena; i++)
    {
        if (strncmp(cadena + i, subcadena, longitudSubcadena) == 0)
        {
            contador++;
        }
    }

    return contador;
}
