#include <stdio.h>
#include <string.h>

// Declaración de la estructura domicilio
struct domicilio {
    char cal[20]; // Calle
    int num;      // Número
    char col[20]; // Colonia
    char cp[5];   // Código Postal
    char ciu[20]; // Ciudad
};

// Declaración de la estructura paciente
struct paciente {
    char nom[20];   // Nombre y apellido
    int edad;
    char sexo;
    int con;        // Condición
    struct domicilio dom; // Estructura domicilio
    char tel[10];   // Teléfono
};

// Prototipos de funciones
void Lectura(struct paciente[], int);
void F1(struct paciente[], int);
void F2(struct paciente[], int);
void F3(struct paciente[], int);

int main() {
    struct paciente HOSPITAL[100]; // Arreglo unidimensional de tipo estructura paciente
    int TAM;

    do {
        printf("Ingrese el número de pacientes: ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1); // Se verifica que el tamaño del arreglo sea correcto

    Lectura(HOSPITAL, TAM);
    F1(HOSPITAL, TAM);
    F2(HOSPITAL, TAM);
    F3(HOSPITAL, TAM);

    return 0;
}

void Lectura(struct paciente A[], int T) {
    for (int I = 0; I < T; I++) {
        printf("\n\nPaciente %d", I + 1);
        fflush(stdin);
        printf("\nNombre: ");
        gets(A[I].nom);
        printf("Edad: ");
        scanf("%d", &A[I].edad);
        fflush(stdin);
        printf("Sexo (F-M): ");
        scanf(" %c", &A[I].sexo);
        printf("Condición (1..5): ");
        scanf("%d", &A[I].con);
        fflush(stdin);
        printf("Calle: ");
        gets(A[I].dom.cal);
        printf("Número: ");
        scanf("%d", &A[I].dom.num);
        fflush(stdin);
        printf("Colonia: ");
        gets(A[I].dom.col);
        printf("Código Postal: ");
        gets(A[I].dom.cp);
        printf("Ciudad: ");
        gets(A[I].dom.ciu);
        printf("Teléfono: ");
        gets(A[I].tel);
    }
}

void F1(struct paciente A[], int T) {
    int FEM = 0, MAS = 0, TOT = 0;
    for (int I = 0; I < T; I++) {
        switch (A[I].sexo) {
            case 'F':
                FEM++;
                break;
            case 'M':
                MAS++;
                break;
        }
        TOT++;
    }
    printf("\nPorcentaje de Hombres: %.2f%%", (float)MAS / TOT * 100);
    printf("\nPorcentaje de Mujeres: %.2f%%", (float)FEM / TOT * 100);
}

void F2(struct paciente A[], int T) {
    int C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0;
    for (int I = 0; I < T; I++) {
        switch (A[I].con) {
            case 1:
                C1++;
                break;
            case 2:
                C2++;
                break;
            case 3:
                C3++;
                break;
            case 4:
                C4++;
                break;
            case 5:
                C5++;
                break;
        }
    }
    printf("\nNúmero pacientes en condición 1: %d", C1);
    printf("\nNúmero pacientes en condición 2: %d", C2);
    printf("\nNúmero pacientes en condición 3: %d", C3);
    printf("\nNúmero pacientes en condición 4: %d", C4);
    printf("\nNúmero pacientes en condición 5: %d", C5);
}

void F3(struct paciente A[], int T) {
    printf("\nPacientes ingresados en estado de gravedad");
    for (int I = 0; I < T; I++) {
        if (A[I].con == 5) {
            printf("\nNombre: %s\tTeléfono: %s", A[I].nom, A[I].tel);
        }
    }
}
