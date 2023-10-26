#include <stdio.h>
#include <string.h>

// Declaración de la estructura matpro
struct matpro {
    char mat[20];  // Materia
    int pro;       // Promedio
};

// Declaración de la estructura alumno
struct alumno {
    int matri;                // Matrícula
    char nom[20];             // Nombre del alumno
    struct matpro cal[5];     // Arreglo de materias y promedios
};

// Prototipos de funciones
void Lectura(struct alumno[], int);
void F1(struct alumno[], int);
void F2(struct alumno[], int);
void F3(struct alumno[], int);

int main() {
    struct alumno ALU[50];
    int TAM;

    do {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > 50 || TAM < 1);

    Lectura(ALU, TAM);
    F1(ALU, TAM);
    F2(ALU, TAM);
    F3(ALU, TAM);

    return 0;
}

void Lectura(struct alumno A[], int T) {
    for (int I = 0; I < T; I++) {
        printf("\nIngrese los datos del alumno %d", I + 1);
        printf("\nIngrese la matrícula del alumno: ");
        scanf("%d", &A[I].matri);
        fflush(stdin);
        printf("Ingrese el nombre del alumno: ");
        gets(A[I].nom);
        for (int J = 0; J < 5; J++) {
            printf("Materia %d: ", J + 1);
            fflush(stdin);
            gets(A[I].cal[J].mat);
            printf("Promedio %d: ", J + 1);
            scanf("%d", &A[I].cal[J].pro);
        }
    }
}

void F1(struct alumno A[], int T) {
    for (int I = 0; I < T; I++) {
        printf("\nMatrícula del alumno: %d", A[I].matri);
        float SUM = 0.0;
        for (int J = 0; J < 5; J++) {
            SUM += A[I].cal[J].pro;
        }
        float promedio = SUM / 5.0;
        printf("\tPromedio: %.2f", promedio);
    }
}

void F2(struct alumno A[], int T) {
    printf("\nAlumnos con calificación mayor a 9 en la tercera materia");
    for (int I = 0; I < T; I++) {
        if (A[I].cal[2].pro > 9) {
            printf("\nMatrícula del alumno: %d", A[I].matri);
        }
    }
}

void F3(struct alumno A[], int T) {
    float SUM = 0.0;
    for (int I = 0; I < T; I++) {
        SUM += A[I].cal[3].pro;
    }
    float promedio = SUM / T;
    printf("\n\nPromedio de la cuarta materia: %.2f", promedio);
}
