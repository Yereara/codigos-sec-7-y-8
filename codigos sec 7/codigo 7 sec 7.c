#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char cad0[] = "Hola México";
    char cad1[] = "Hola Guatemala";
    char cad2[] = "Hola Venezuela";
    char cad3[] = "Hola México";
    char *c, c3;
    
    i = strcmp(cad0, cad1);
    /* La función strcmp permite comparar dos cadenas de caracteres. Regresa un valor positivo si la primera cadena (cad0) es mayor que la segunda (cad1), un valor negativo si es menor y 0 si son iguales. */
    printf("\nResultado de la comparación —cad0 y cad1—: %d", i);
    
    i = strcmp(cad0, cad2);
    printf("\nResultado de la comparación —cad0 y cad2—: %d", i);
    
    i = strcmp(cad0, cad3);
    printf("\nResultado de la comparación —cad0 y cad3—: %d", i);
    
    i = strlen(cad0);
    /* La función strlen obtiene la longitud —el número de caracteres— de una cadena. */
    printf("\nLongitud cadena cad0: %d", i);
    
    i = strlen(cad1);
    printf("\nLongitud cadena cad1: %d", i);
    
    c = strchr(cad1, 'G'); // c es un puntero a caracter.
    /* La función strchr busca la posición en la que se encuentra un caracter específico en la cadena de caracteres. Si lo encuentra, regresa un puntero a la primera ocurrencia del caracter en la cadena, de lo contrario, regresa NULL. */
    
    if (c != NULL) {
        c3 = *c; // c3 toma el contenido de la celda de memoria a la que apunta c.
        printf("\nEl valor de c3 es: %c", c3);
    }
    
    c = strchr(cad2, 'V');
    
    if (c != NULL) {
        c3 = *c;
        printf("\nEl valor de c3 es: %c", c3);
    }

    return 0;
}
