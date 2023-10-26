#include <stdio.h>
#include <string.h>

/* Declaración de la estructura alumno utilizando un typedef. */
typedef struct {
    int matricula;
    char nombre[30];
    float cal[5];
} Alumno;

/* Prototipos de funciones. */
void Lectura(Alumno[], int);
void F1(Alumno[], int);
void F2(Alumno[], int);
void F3(Alumno[], int);

int main(void) {
    Alumno ARRE[50]; // Se declara un arreglo de tipo Alumno.
    int TAM;

    do {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > 50 || TAM < 1); // Se verifica que el tamaño del arreglo sea correcto.

    Lectura(ARRE, TAM);
    F1(ARRE, TAM);
    F2(ARRE, TAM);
    F3(ARRE, TAM);

    return 0;
}

void Lectura(Alumno A[], int T) {
    int I, J;
    for (I = 0; I < T; I++) {
        printf("\nIngrese los datos del alumno %d", I + 1);
        printf("\nIngrese la matrícula del alumno: ");
        scanf("%d", &A[I].matricula);
        fflush(stdin);
        printf("Ingrese el nombre del alumno: ");
        gets(A[I].nombre);
        for (J = 0; J < 5; J++) {
            printf("\tIngrese la calificación %d del alumno %d: ", J + 1, I + 1);
            scanf("%f", &A[I].cal[J]);
        }
    }
}

void F1(Alumno A[], int T) {
    int I, J;
    float SUM, PRO;
    for (I = 0; I < T; I++) {
        printf("\nMatrícula del alumno: %d", A[I].matricula);
        SUM = 0.0;
        for (J = 0; J < 5; J++) {
            SUM += A[I].cal[J];
        }
        PRO = SUM / 5;
        printf("\t\tPromedio: %.2f", PRO);
    }
}

void F2(Alumno A[], int T) {
    int I;
    printf("\nAlumnos con calificación en la tercera materia > 9");
    for (I = 0; I < T; I++) {
        if (A[I].cal[2] > 9) {
            printf("\nMatrícula del alumno: %d", A[I].matricula);
        }
    }
}

void F3(Alumno A[], int T) {
    int I;
    float PRO, SUM = 0.0;
    for (I = 0; I < T; I++) {
        SUM += A[I].cal[3];
    }
    PRO = SUM / T;
    printf("\n\nPromedio de la materia 4: %.2f", PRO);
}
