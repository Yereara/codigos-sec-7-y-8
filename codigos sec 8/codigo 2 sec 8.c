#include <stdio.h>
#include <stdlib.h>  // Agregamos la biblioteca stdlib.h para utilizar la función 'malloc'.
#include <string.h>

/* Declaración de la estructura alumno. */
struct Alumno {
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    char direccion[20];
};

/* Prototipo de función. */
void Lectura(struct Alumno *);

int main(void) {
    struct Alumno a0 = {120, "María", "Contabilidad", 8.9, "Querétaro"};
    struct Alumno *a3, *a4, *a5;
    struct Alumno a6;

    /* Observa que las variables *a3, *a4 y *a5 se declaran como apuntadores de tipo estructura Alumno.
       a6 es una variable de tipo estructura Alumno. */

    a3 = &a0; // Se le asigna a3 la dirección de la variable a0.

    a4 = (struct Alumno *)malloc(sizeof(struct Alumno)); // Asignamos memoria para a4.

    printf("\nIngrese la matrícula del alumno 4: ");
    scanf("%d", &a4->matricula);
    fflush(stdin);
    printf("Ingrese el nombre del alumno 4: ");
    gets(a4->nombre);
    printf("Ingrese la carrera del alumno 4: ");
    gets(a4->carrera);
    printf("Ingrese promedio del alumno 4: ");
    scanf("%f", &a4->promedio);
    fflush(stdin);
    printf("Ingrese la dirección del alumno 4: ");
    gets(a4->direccion);

    a5 = (struct Alumno *)malloc(sizeof(struct Alumno));
    Lectura(a5); // Pasamos el apuntador a5 a la función Lectura.

    Lectura(&a6); // Pasamos la variable a6 a la función Lectura.

    printf("\nDatos del alumno 3\n");
    printf("%d\t%s\t%s\t%.2f\t%s", a3->matricula, a3->nombre, a3->carrera, a3->promedio, a3->direccion);
    printf("\nDatos del alumno 4\n");
    printf("%d\t%s\t%s\t%.2f\t%s", a4->matricula, a4->nombre, a4->carrera, a4->promedio, a4->direccion);
    printf("\nDatos del alumno 5\n");
    printf("%d\t%s\t%s\t%.2f\t%s", a5->matricula, a5->nombre, a5->carrera, a5->promedio, a5->direccion);
    printf("\nDatos del alumno 6\n");
    printf("%d\t%s\t%s\t%.2f\t%s", a6.matricula, a6.nombre, a6.carrera, a6.promedio, a6.direccion);

    // Liberar la memoria asignada a4 y a5.
    free(a4);
    free(a5);

    return 0;
}

void Lectura(struct Alumno *a) {
    printf("\nIngrese la matrícula del alumno: ");
    scanf("%d", &a->matricula);
    fflush(stdin);
    printf("Ingrese el nombre del alumno: ");
    gets(a->nombre);
    fflush(stdin);
    printf("Ingrese la carrera del alumno: ");
    gets(a->carrera);
    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &a->promedio);
    fflush(stdin);
    printf("Ingrese la dirección del alumno: ");
    gets(a->direccion);
}
