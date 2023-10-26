#include <stdio.h>
#include <string.h> // Se agrega la inclusión de la biblioteca string.h para usar las funciones relacionadas con cadenas.

int main(void)
{
    char *cad0;
    cad0 = "Argentina"; // Declaración y asignación correctas.
    puts(cad0);
    cad0 = "Brasil"; // Modificación del contenido de cad0.
    puts(cad0);

    char cad1[100]; // Se reserva espacio para una cadena.
    gets(cad1); // Lectura de una cadena en cad1.
    puts(cad1);

    char cad2[20] = "México"; // Declaración y asignación correctas.
    puts(cad2);

    gets(cad2); // Modificación del contenido de cad2 a través de una lectura.
    puts(cad2);

    // Intentar asignar una cadena a un elemento específico de la cadena cad2 genera un error.
    // cad2[10] = "Guatemala"; // Esto genera un error en la compilación.
    
    return 0;
}
s