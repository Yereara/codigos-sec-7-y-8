#include <stdio.h>
#include <string.h>

/* Declaración de la estructura alumno. */
struct Alumno {
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    char direccion[20];
};

int main(void) {
    struct Alumno a1 = {120, "María", "Contabilidad", 8.9, "Querétaro"};
    struct Alumno a2, a3;

    char nom[20], car[20], dir[20];
    int mat;
    float pro;

    /* Asignación de valores a los campos de a2 mediante lecturas. */
    printf("\nIngrese la matrícula del alumno 2: ");
    scanf("%d", &a2.matricula);
    fflush(stdin);

    printf("Ingrese el nombre del alumno 2: ");
    gets(a2.nombre);

    printf("Ingrese la carrera del alumno 2: ");
    gets(a2.carrera);

    printf("Ingrese el promedio del alumno 2: ");
    scanf("%f", &a2.promedio);
    fflush(stdin);

    printf("Ingrese la dirección del alumno 2: ");
    gets(a2.direccion);

    /* Asignación de valores a los campos de a3 mediante lecturas. */
    printf("\nIngrese la matrícula del alumno 3: ");
    scanf("%d", &mat);
    a3.matricula = mat;
    fflush(stdin);

    printf("Ingrese el nombre del alumno 3: ");
    gets(nom);
    strcpy(a3.nombre, nom);

    printf("Ingrese la carrera del alumno 3: ");
    gets(car);
    strcpy(a3.carrera, car);

    printf("Ingrese el promedio del alumno 3: ");
    scanf("%f", &pro);
    a3.promedio = pro;
    fflush(stdin);

    printf("Ingrese la dirección del alumno 3: ");
    gets(dir);
    strcpy(a3.direccion, dir);

    /* Imprimir los datos de a1 y a2. */
    printf("\nDatos del alumno 1\n");
    printf("%d\n%s\n%s\n%.2f\n%s\n", a1.matricula, a1.nombre, a1.carrera, a1.promedio, a1.direccion);

    printf("\nDatos del alumno 2\n");
    printf("%d\n%s\n%s\n%.2f\n%s\n", a2.matricula, a2.nombre, a2.carrera, a2.promedio, a2.direccion);

    /* Imprimir los datos de a3. */
    printf("\nDatos del alumno 3\n");
    printf("%d\t%s\t%s\t%.2f\t%s\n", a3.matricula, a3.nombre, a3.carrera, a3.promedio, a3.direccion);

    return 0;
}
