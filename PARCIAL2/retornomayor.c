#include <stdio.h>

int encontrarMayor(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int numero1, numero2;

    printf("Introduce el primer número: ");
    scanf("%d", &numero1);

    printf("Introduce el segundo número: ");
    scanf("%d", &numero2);

    int mayor = encontrarMayor(numero1, numero2);
    printf("El mayor entre %d y %d es: %d\n", numero1, numero2, mayor);

    return 0;
}
