#include <stdio.h>
#include <string.h>

void inverso(char *);

int main(void)
{
    char fra[50];
    
    printf("\nIngrese la línea de texto: ");
    fgets(fra, sizeof(fra), stdin);
    
    printf("La línea de texto en forma inversa es: ");
    inverso(fra);
    
    return 0;
}

void inverso(char *cadena)
{
    if (cadena[0] != '\0')
    {
        inverso(&cadena[1]);
        putchar(cadena[0]);
    }
}
