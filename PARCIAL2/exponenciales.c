#include <stdio.h>

int calcularExponencial(int base, int exponente) {
    int resultado = 1;

    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }

    return resultado;
}

int main() {
    int base, exponente;

    printf("Introduce la base: ");
    scanf("%d", &base);

    printf("Introduce el exponente: ");
    scanf("%d", &exponente);

    int resultado = calcularExponencial(base, exponente);
    printf("%d elevado a la %d es: %d\n", base, exponente, resultado);

    return 0;
}
