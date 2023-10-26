#include <stdio.h>
#include <string.h>

void inverso(char *cadena);

int main(void)
{
    char fra[50];
    
    printf("\nIngrese la línea de texto: ");
    gets(fra);
    
    inverso(fra);
    
    printf("\nLa línea de texto en forma inversa es: %s\n", fra);

    return 0;
}

void inverso(char *cadena)
{
    int lon = strlen(cadena);
    
    for (int i = 0, j = lon - 1; i < j; i++, j--)
    {
        char temp = cadena[i];
        cadena[i] = cadena[j];
        cadena[j] = temp;
    }
}
