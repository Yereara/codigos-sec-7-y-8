#include <stdio.h>

int main(void)
{
    char *cad0 = "Buenos días"; /* Se asignan 11 caracteres más el carácter de terminación '\0' a cad0. */
    char cad1[20] = "Hola"; /* Se asignan cuatro caracteres más el carácter de terminación a cad1, con espacio para 20 caracteres. */
    char cad2[] = "México"; /* Se asignan seis caracteres más el carácter de terminación a cad2. */
    char cad3[] = {'B', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'}; /* Otra forma de asignar valores a cad3. */
    char cad4[20], cad5[20], cad6[20];
    char p;
    int i = 0;

    printf("\nLa cadena cad0 es: %s\n", cad0);
    printf("La cadena cad1 es: %s\n", cad1);
    printf("La cadena cad2 es: %s\n", cad2);
    printf("La cadena cad3 es: %s\n", cad3);

    printf("\nIngrese una línea de texto (se lee con gets): \n");
    gets(cad4);
    printf("La cadena cad4 es: %s\n", cad4);

    while ((p = getchar()) != '\n') {
        cad5[i++] = p;
    }
    cad5[i] = '\0';

    printf("\nLa cadena cad5 es: %s\n", cad5);

    printf("\nIngrese una línea de texto (se lee con scanf): \n");
    scanf("%s", cad6);
    printf("La cadena cad6 es: %s\n", cad6);

    return 0;
}
