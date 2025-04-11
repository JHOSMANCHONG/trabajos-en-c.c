#include <stdio.h>

int main() {
    int opcion;

    printf("\033[42m");
    printf("\n\tCalculadora basica con gotoxy y switch-case\n");
    printf("\033[0m");

    printf("\n\t");
    printf("\033[4m");
    printf("Menu de operaciones");
    printf("\033[0m");
    printf("\n");

    printf("\033[41m\033[30m"); 
    printf("\t1. \033[0mSuma\n");
    printf("\033[42m\033[30m"); 
    printf("\t2. \033[0mResta\n");
    printf("\033[44m\033[30m"); 
    printf("\t3. \033[0mMultiplicacion\n");
    printf("\033[43m\033[30m"); 
    printf("\t4. \033[0mDivision\n");
    printf("\033[0m");

    printf("\n\tSeleccione una opcion ");
    printf("\033[47m\033[30m"); 
    printf("(1-4)");
    printf("\033[0m");
    printf(": ");

    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("\n\tHas seleccionado SUMA.\n");
            break;
        case 2:
            printf("\n\tHas seleccionado RESTA.\n");
            break;
        case 3:
            printf("\n\tHas seleccionado MULTIPLICACION.\n");
            break;
        case 4:
            printf("\n\tHas seleccionado DIVISION.\n");
            break;
        default:
            printf("\n\tOpcion no valida.\n");
            break;
    }

    return 0;
}