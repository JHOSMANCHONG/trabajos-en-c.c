#include <stdio.h>

void determinarSigno(int numero) {
    if (numero > 0) {
        printf("El número %d es positivo.\n", numero);
    } else if (numero < 0) {
        printf("El número %d es negativo.\n", numero);
    } else {
        printf("El número es cero, no es ni positivo ni negativo.\n");
    }
}

int main() {
    int numero;

    printf("Introduce un número entero: ");
    scanf("%d", &numero);

    determinarSigno(numero);

    return 0;
}
