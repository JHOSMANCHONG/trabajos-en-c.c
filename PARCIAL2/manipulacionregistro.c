#include <stdio.h>
int main() {
    int a, b, c, d, e, f, g = 0;

    printf("Ingrese valor A: ");
    scanf("%d", &a);
    printf("Ingrese valor B: ");
    scanf("%d", &b);
    printf("Ingrese valor C: ");
    scanf("%d", &c);
    printf("Ingrese valor D: ");
    scanf("%d", &d);
    printf("Ingrese valor E: ");
    scanf("%d", &e);
    printf("Ingrese valor F: ");
    scanf("%d", &f);

    int *const AH = &a;
    int *const AL = &b;
    int *const BH = &c;
    int *const BL = &d;
    int *const CH = &e;
    int *const CL = &f;
    int *const DL = &g;

    printf("Valores ingresados:\n");
    printf("A=%d, Dirección=%p\n", *AH, (void *)AH);
    printf("B=%d, Dirección=%p\n", *AL, (void *)AL);
    printf("C=%d, Dirección=%p\n", *BH, (void *)BH);
    printf("D=%d, Dirección=%p\n", *BL, (void *)BL);
    printf("E=%d, Dirección=%p\n", *CH, (void *)CH);
    printf("F=%d, Dirección=%p\n", *CL, ( void*)CL);

    printf("Operaciones entre AH y AL:\n");
    *DL = *AH + *AL;
    printf("Suma: %d, Dirección almacenada en DL: %p\n", *DL, (void *)DL);

    *DL = *AH - *AL;
    printf("Resta: %d, Dirección almacenada en DL: %p\n", *DL, (void *)DL);

    *DL = (*AH) * (*AL);
    printf("Multiplicación: %d, Dirección almacenada en DL: %p\n", *DL, (void *)DL);

    *DL = (*AH) / (*AL);
    printf("División: %d, Dirección almacenada en DL: %p\n", *DL, (void *)DL);

    printf("Operaciones entre BH y BL:\n");
    *DL = *BH + *BL;
    printf("Suma: %d, Dirección almacenada en DL: %p\n", *DL, (void *)DL);

    *DL = *BH - *BL;
    printf("Resta: %d, Dirección almacenada en DL: %p\n", *DL, (void *)DL);

    *DL = (*BH) * (*BL);
    printf("Multiplicación: %d, Dirección almacenada en DL: %p\n", *DL, (void *)DL);

    *DL = (*BH) / (*BL);
    printf("División: %d, Dirección almacenada en DL: %p\n", *DL, (void *)DL);

    printf("Operaciones entre CH y CL:\n");
    *DL = *CH + *CL;
    printf("Suma: %d, Dirección almacenada en DL: %p\n", *DL, (void *)DL);

    *DL = *CH - *CL;
    printf("Resta: %d, Dirección almacenada en DL: %p\n", *DL, (void *)DL);

    *DL = (*CH) * (*CL);
    printf("Multiplicación: %d, Dirección almacenada en DL: %p\n", *DL, (void *)DL);

    *DL = (*CH) / (*CL);
    printf("División: %d, Dirección almacenada en DL: %p\n", *DL, (void *)DL);

    return 0;
}
