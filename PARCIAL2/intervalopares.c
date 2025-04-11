#include <stdio.h>

// Función para imprimir los números pares dentro de un intervalo
void imprimirNumerosPares(int inicio, int fin) {
    printf("Números pares entre %d y %d:\n", inicio, fin);

    for (int i = inicio; i <= fin; i++) {
        if (i % 2 == 0) { // Verificamos si el número es par
            printf("%d\n", i);
        }
    }
}

int main() {
    int inicio, fin;

    printf("Introduce el inicio del intervalo: ");
    scanf("%d", &inicio);

    printf("Introduce el fin del intervalo: ");
    scanf("%d", &fin);

    if (inicio <= fin) {
        imprimirNumerosPares(inicio, fin);
    } else {
        printf("Error: El inicio del intervalo debe ser menor o igual al fin.\n");
    }

    return 0;
}
