#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Declaración de la estructura domicilio utilizando un typedef. */
typedef struct {
    char calle[20];
    int numero;
    int cp;
    char localidad[20];
} Domicilio;

/* Declaración de la estructura anidada empleado. */
struct Empleado {
    char nombre[20];
    char departamento[20];
    float sueldo;
    Domicilio direccion; /* direccion es un campo de tipo estructura Domicilio de la estructura Empleado. */
};

/* Prototipo de función. */
void Lectura(struct Empleado *);

int main(void) {
    struct Empleado e0 = {"Arturo", "Compras", 15500.75, {"San Jerónimo", 120, 3490, "Toluca"}};
    struct Empleado *e1, e3, e4;
    struct Empleado *e2;

    /* Se declaran diferentes variables y apuntadores de la estructura Empleado
       para que el lector pueda apreciar también las diferentes formas en que los campos reciben valores. */

    e1 = (struct Empleado *)malloc(sizeof(struct Empleado));

    printf("\nIngrese el nombre del empleado 1: ");
    scanf("%s", e1->nombre);
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    gets(e1->departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e1->sueldo);
    printf("---Ingrese la dirección del empleado---");
    printf("\n\tCalle: ");
    fflush(stdin);
    gets(e1->direccion.calle);
    printf("\tNúmero: ");
    scanf("%d", &e1->direccion.numero);
    printf("\tCódigo Postal: ");
    scanf("%d", &e1->direccion.cp);
    printf("\tLocalidad: ");
    fflush(stdin);
    gets(e1->direccion.localidad);

    printf("\nIngrese el nombre del empleado 3: ");
    scanf("%s", e3.nombre);
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    gets(e3.departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e3.sueldo);
    printf("---Ingrese la dirección del empleado---");
    printf("\n\tCalle: ");
    fflush(stdin);
    gets(e3.direccion.calle);
    printf("\tNúmero: ");
    scanf("%d", &e3.direccion.numero);
    printf("\tCódigo Postal: ");
    scanf("%d", &e3.direccion.cp);
    printf("\tLocalidad: ");
    fflush(stdin);
    gets(e3.direccion.localidad);

    e2 = (struct Empleado *)malloc(sizeof(struct Empleado));
    Lectura(e2);
    Lectura(&e4);

    printf("\nDatos del empleado 1\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s\n", e1->nombre, e1->departamento, e1->sueldo,
           e1->direccion.calle, e1->direccion.numero, e1->direccion.cp, e1->direccion.localidad);

    printf("Datos del empleado 4\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s\n", e4.nombre, e4.departamento, e4.sueldo,
           e4.direccion.calle, e4.direccion.numero, e4.direccion.cp, e4.direccion.localidad);

    // Liberar la memoria asignada para e1 y e2.
    free(e1);
    free(e2);

    return 0;
}

void Lectura(struct Empleado *a) {
    printf("\nIngrese el nombre del empleado: ");
    gets(a->nombre);
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    gets(a->departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &a->sueldo);
    fflush(stdin);
    printf("---Ingrese la dirección del empleado---");
    printf("\n\tCalle: ");
    gets(a->direccion.calle);
    printf("\tNúmero: ");
    scanf("%d", &a->direccion.numero);
    printf("\tCódigo Postal: ");
    scanf("%d", &a->direccion.cp);
    printf("\tLocalidad: ");
    fflush(stdin);
    gets(a->direccion.localidad);
}
