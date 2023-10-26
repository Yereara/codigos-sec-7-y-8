#include <stdio.h>
#include <string.h>

// Declaración de la estructura banco
struct banco {
    char noba[10]; // Nombre del banco
    char nucu[10]; // Número de cuenta
};

// Declaración de la estructura domicilio
struct domicilio {
    char cnu[20]; // Calle y número
    char col[20]; // Colonia
    char cp[5]; // Código Postal
    char ciu[15]; // Ciudad
};

// Declaración de la union fpago
union fpago {
    struct banco che; // Cheque. Campo de tipo estructura banco
    struct banco nomi; // Nómina. Campo de tipo estructura banco
    char venta; // Ventanilla
};

// Declaración de la estructura vendedor
struct vendedor {
    int num; // Número de vendedor
    char nom[20]; // Nombre del vendedor
    float ven[12]; // Ventas del año. Arreglo unidimensional de tipo real
    struct domicilio domi; // domi es de tipo estructura domicilio
    float sal; // Salario mensual
    union fpago pago; // pago es de tipo unión fpago
    int cla; // Clave forma de pago
};

// Prototipos de funciones
void Lectura(struct vendedor[], int);
void F1(struct vendedor*, int);
void F2(struct vendedor*, int);
void F3(struct vendedor*, int);
void F4(struct vendedor*, int);

int main() {
    struct vendedor VENDEDORES[100]; // Declaración del arreglo unidimensional de tipo estructura vendedor
    int TAM;

    do {
        printf("Ingrese el número de vendedores: ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1); // Se verifica que el número de elementos del arreglo sea correcto

    Lectura(VENDEDORES, TAM);
    F1(VENDEDORES, TAM);
    F2(VENDEDORES, TAM);
    F3(VENDEDORES, TAM);
    F4(VENDEDORES, TAM);

    printf("\nFIN DEL PROGRAMA\n");

    return 0;
}

void Lectura(struct vendedor A[], int T) {
    for (int I = 0; I < T; I++) {
        printf("\n\nIngrese datos del vendedor %d", I + 1);
        printf("\nNúmero de vendedor: ");
        scanf("%d", &A[I].num);
        printf("Nombre del vendedor: ");
        fflush(stdin);
        gets(A[I].nom);
        printf("Ventas del año:\n");
        for (int J = 0; J < 12; J++) {
            printf("Mes %d: ", J + 1);
            scanf("%f", &A[I].ven[J]);
        }
        printf("Domicilio del vendedor:\n");
        printf("Calle y número: ");
        fflush(stdin);
        gets(A[I].domi.cnu);
        printf("Colonia: ");
        fflush(stdin);
        gets(A[I].domi.col);
        printf("Código Postal: ");
        fflush(stdin);
        gets(A[I].domi.cp);
        printf("Ciudad: ");
        fflush(stdin);
        gets(A[I].domi.ciu);
        printf("Salario del vendedor: ");
        scanf("%f", &A[I].sal);
        printf("Forma de Pago (Banco-1 Nómina-2 Ventanilla-3): ");
        scanf("%d", &A[I].cla);
        switch (A[I].cla) {
            case 1:
                printf("Nombre del banco: ");
                fflush(stdin);
                gets(A[I].pago.che.noba);
                printf("Número de cuenta: ");
                fflush(stdin);
                gets(A[I].pago.che.nucu);
                break;
            case 2:
                printf("Nombre del banco: ");
                fflush(stdin);
                gets(A[I].pago.nomi.noba);
                printf("Número de cuenta: ");
                fflush(stdin);
                gets(A[I].pago.nomi.nucu);
                break;
            case 3:
                A[I].pago.venta = 'S';
                break;
        }
    }
}

void F1(struct vendedor A[], int T) {
    printf("\nVentas Totales de los Vendedores");
    for (int I =
