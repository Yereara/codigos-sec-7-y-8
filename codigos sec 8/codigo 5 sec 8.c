#include <stdio.h>
#include <string.h>

/* Declaración de una unión. */
union Datos {
    char celular[15];
    char correo[20];
};

/* Declaración de una estructura utilizando typedef. */
typedef struct {
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    union Datos personales;
    /* Uno de los campos de la estructura alumno es una unión. */
} Alumno;

/* Prototipos de funciones. */
void Lectura(Alumno *a);

int main(void) {
    Alumno a1 = {120, "María", "Contabilidad", 8.9, .personales.celular = "5-158-40-50"};
    Alumno a2, a3;

    /* Para que puedas observar las diferentes formas en que los campos de las
       variables de tipo estructura alumno reciben valores, ingresamos los valores
       de los campos de tres formas diferentes. Los campos de a1 reciben valores
       directamente, los campos de a2 se leen en el programa principal, y los campos
       de a3 reciben valores a través de una función. */
    printf("Alumno 2\n");
    printf("Ingrese la matrícula: ");
    scanf("%d", &a2.matricula);
    fflush(stdin);
    printf("Ingrese el nombre: ");
    gets(a2.nombre);
    fflush(stdin);
    printf("Ingrese la carrera: ");
    gets(a2.carrera);
    printf("Ingrese el promedio: ");
    scanf("%f", &a2.promedio);
    fflush(stdin);
    printf("Ingrese el correo electrónico: ");
    gets(a2.personales.correo);

    printf("Alumno 3\n");
    Lectura(&a3); // Llamada a la función para leer los campos de la variable a3.

    /* Impresión de resultados. */
    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f\n", a1.promedio);
    puts(a1.personales.celular);
    puts(a1.personales.correo);

    printf("\nDatos del alumno 2\n");
    printf("%d\n", a2.matricula);
    puts(a2.nombre);
    puts(a2.carrera);
    printf("%.2f\n", a2.promedio);
    puts(a2.personales.celular);
    puts(a2.personales.correo);

    printf("\nDatos del alumno 3\n");
    printf("%d\n", a3.matricula);
    puts(a3.nombre);
    puts(a3.carrera);
    printf("%.2f\n", a3.promedio);
    puts(a3.personales.celular);
    puts(a3.personales.correo);

    return 0;
}

void Lectura(Alumno *a) {
    printf("Ingrese la matrícula: ");
    scanf("%d", &a->matricula);
    fflush(stdin);
    printf("Ingrese el nombre: ");
    gets(a->nombre);
    fflush(stdin);
    printf("Ingrese la carrera: ");
    gets(a->carrera);
    printf("Ingrese el promedio: ");
    scanf("%f", &a->promedio);
    fflush(stdin);
    printf("Ingrese el teléfono celular: ");
    gets(a->personales.celular);
}
