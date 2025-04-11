#include <stdio.h>

int main() {
    int opcion;
    float num1, num2, resultado;
    int color_fondo;

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

    if (opcion >= 1 && opcion <= 4) {
        printf("\033[H\033[J"); // Limpiar la pantalla
        printf("\n\tIngrese el primer numero: ");
        scanf("%f", &num1);
        printf("\n\tIngrese el segundo numero: ");
        scanf("%f", &num2);
    }

    switch (opcion) {
        case 1:
            resultado = num1 + num2;
            color_fondo = 41;
            break;
        case 2:
            resultado = num1 - num2;
            color_fondo = 42;
            break;
        case 3:
            resultado = num1 * num2;
            color_fondo = 44;
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                color_fondo = 43;
            } else {
                printf("\n\tError: Division por cero.\n");
                return 1;
            }
            break;
        default:
            printf("\n\tOpcion no valida.\n");
            return 1;
    }

    printf("\033[%dm\033[30m", color_fondo);
    printf("\n\tResultado: %.2f\n", resultado);
    printf("\033[0m");

    return 0;
}