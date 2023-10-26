#include <stdio.h>
#include <string.h>

// Declaración de la estructura ubicación
struct ubicacion {
    char zona[20];
    char calle[20];
    char colo[20]; // Colonia
};

// Declaración de la estructura propiedades
struct propiedades {
    char clave[5];
    float scu; // Superficie cubierta
    float ste; // Superficie terreno
    char car[50]; // Características
    struct ubicacion ubi; // Estructura ubicación
    float precio;
    char dispo; // Disponibilidad
};

// Prototipos de funciones
void Lectura(struct propiedades[], int);
void F1(struct propiedades*, int);
void F2(struct propiedades*, int);

int main() {
    struct propiedades PROPIE[100]; // Arreglo unidimensional de tipo estructura propiedades
    int TAM;

    do {
        printf("Ingrese el número de propiedades: ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1); // Se verifica que el tamaño del arreglo sea correcto

    Lectura(PROPIE, TAM);
    F1(PROPIE, TAM);
    F2(PROPIE, TAM);

    return 0;
}

void Lectura(struct propiedades A[], int T) {
    for (int I = 0; I < T; I++) {
        printf("\n\nIngrese datos de la propiedad %d", I + 1);
        printf("\nClave: ");
        fflush(stdin);
        gets(A[I].clave);
        printf("Superficie cubierta: ");
        scanf("%f", &A[I].scu);
        printf("Superficie terreno: ");
        scanf("%f", &A[I].ste);
        printf("Características: ");
        fflush(stdin);
        gets(A[I].car);
        printf("Zona: ");
        fflush(stdin);
        gets(A[I].ubi.zona);
        printf("Calle: ");
        fflush(stdin);
        gets(A[I].ubi.calle);
        printf("Colonia: ");
        fflush(stdin);
        gets(A[I].ubi.colo);
        printf("Precio: ");
        scanf("%f", &A[I].precio);
        printf("Disponibilidad (Venta-V Renta-R): ");
        scanf(" %c", &A[I].dispo);
    }
}

void F1(struct propiedades A[], int T) {
    printf("\nListado de Propiedades para Venta en Miraflores");
    for (int I = 0; I < T; I++) {
        if (A[I].dispo == 'V' && strcmp(A[I].ubi.zona, "Miraflores") == 0 && A[I].precio >= 450000 && A[I].precio <= 650000) {
            printf("\nClave de la propiedad: %s", A[I].clave);
            printf("\nSuperficie cubierta: %.2f", A[I].scu);
            printf("\nSuperficie terreno: %.2f", A[I].ste);
            printf("\nCaracterísticas: %s", A[I].car);
            printf("\nCalle: %s", A[I].ubi.calle);
            printf("\nColonia: %s", A[I].ubi.colo);
            printf("\nPrecio: %.2f\n", A[I].precio);
        }
    }
}

void F2(struct propiedades A[], int T) {
    char zon[20];
    float li, ls;
    printf("\nListado de Propiedades para Renta");
    printf("Ingrese zona geográfica: ");
    fflush(stdin);
    gets(zon);
    printf("Ingrese el límite inferior del precio: ");
    scanf("%f", &li);
    printf("Ingrese el límite superior del precio: ");
    scanf("%f", &ls);
    for (int I = 0; I < T; I++) {
        if (A[I].dispo == 'R' && strcmp(A[I].ubi.zona, zon) == 0 && A[I].precio >= li && A[I].precio <= ls) {
            printf("\nClave de la propiedad: %s", A[I].clave);
            printf("\nSuperficie cubierta: %.2f", A[I].scu);
            printf("\nSuperficie terreno: %.2f", A[I].ste);
            printf("\nCaracterísticas: %s", A[I].car);
            printf("\nCalle: %s", A[I].ubi.calle);
            printf("\nColonia: %s", A[I].ubi.colo);
            printf("\nPrecio: %.2f", A[I].precio);
        }
    }
}
