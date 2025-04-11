#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operador;

    printf("Introduce el primer numero: ");
    scanf("%f", &num1);
    printf("Introduce el segundo numero: ");
    scanf("%f", &num2);
    printf("Introduce una operacion (+, -, *, /): ");
    scanf(" %c", &operador);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Error: Division por cero no permitida.\n");
            }
            break;
        default:
            printf("Operador no valido.\n");
            break;
    }

    return 0;
}
