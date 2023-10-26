#include <stdio.h>
#include <string.h>

int main(void)
{
    char cad0[] = "Hola México";
    char cad1[20];
    char cad2[20];
    char cad3[] = ", buenos días!!!";

    strcpy(cad1, cad0);
    /* La función strcpy permite copiar una cadena de caracteres completa. En este caso, copiamos cad0 a cad1. */
    printf("\nPrueba de la función strcpy. Se copia la cadena cad0 a cad1: %s\n", cad1);

    strcpy(cad1, cad3);
    printf("\nPrueba de la función strcpy. Se copia la cadena cad3 a cad1: %s\n", cad1);

    strcpy(cad1, "XX");
    printf("\nPrueba de la función strcpy. Se copia la cadena XX a cad1: %s\n", cad1);

    strncpy(cad2, cad0, 4);
    cad2[4] = '\0';
    /* La función strncpy permite copiar un número determinado de caracteres a otra cadena de caracteres. En este caso, copiamos 4 caracteres de cad0 a cad2. */
    printf("\nPrueba de la función strncpy. Se copian 4 caracteres de cad0 a cad2: %s\n", cad2);

    strncpy(cad2, cad3, 3);
    cad2[3] = '\0';
    printf("\nPrueba de la función strncpy. Se copian 3 caracteres de cad3 a cad2: %s\n", cad2);

    strcat(cad0, cad3);
    /* La función strcat permite incorporar una cadena de caracteres a otra cadena dada. En este caso, agregamos cad3 a cad0. */
    printf("\nPrueba de la función strcat. Se incorpora la cadena cad3 a cad0: %s\n", cad0);

    strcat(cad1, " YY");
    printf("\nPrueba de la función strcat. Se incorpora la cadena YY a cad1: %s\n", cad1);

    strcat(cad2, " ");
    strncat(cad2, cad0, 4);
    /* La función strncat permite incorporar un número determinado de caracteres a una cadena. En este caso, agregamos cuatro caracteres de cad0 a cad2. */
    printf("\nPrueba de la función strncat. Se incorporan 4 caracteres de cad0 a cad2: %s\n", cad2);

    char *ptr = strstr(cad0, "México");
    /* La función strstr se utiliza para localizar una cadena de caracteres dentro de otra cadena. Si se encuentra, devuelve un puntero al inicio de la primera ocurrencia de la cadena. De lo contrario, devuelve NULL. */
    if (ptr != NULL) {
        printf("\nPrueba de la función strstr. Se localiza la cadena 'México' dentro de cad0: %s\n", ptr);
    } else {
        printf("\nPrueba de la función strstr. No se encuentra la cadena 'México' dentro de cad0.\n");
    }

    ptr = strstr(cad0, "Guatemala");
    if (ptr != NULL) {
        printf("\nPrueba de la función strstr. Se localiza la cadena 'Guatemala' dentro de cad0: %s\n", ptr);
    } else {
        printf("\nPrueba de la función strstr. No se encuentra la cadena 'Guatemala' dentro de cad0.\n");
    }

    return 0;
}
