void Ventas(producto A[], int T)
{
    int CLA, CAN, I, RES;
    float TOT, PAR;
    printf("\nIngrese clave del producto -0 para salir-: ");
    scanf("%d", &CLA);
    TOT = 0.0;
    while (CLA)
    {
        printf("\tCantidad: ");
        scanf("%d", &CAN);
        I = 0;
        while ((I < T) && (A[I].clave < CLA))
        {
            I++;
        }

        if ((I == T) || (A[I].clave > CLA))
        {
            printf("\nLa clave del producto es incorrecta");
        }
        else if (A[I].existencia >= CAN)
        {
            A[I].existencia -= CAN;
            PAR = A[I].precio * CAN;
            TOT += PAR;
        }
        else
        {
            printf("\nNo existe en inventario la cantidad solicitada. Solo hay %d", A[I].existencia);
            printf("\n¿Los lleva 1 - Si 0 – No?: ");
            scanf("%d", &RES);
            if (RES)
            {
                PAR = A[I].precio * A[I].existencia;
                A[I].existencia = 0;
                TOT += PAR;
            }
        }

        printf("\nIngrese clave del producto -0 para salir-: ");
        scanf("%d", &CLA);
    }

    printf("El total de la venta es: %.2f\n", TOT);
}
