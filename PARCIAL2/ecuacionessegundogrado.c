#include <stdio.h>
#include <math.h>

// Función para resolver la ecuación de segundo grado
void resolverEcuacionSegundoGrado(float a, float b, float c) {
    float discriminante, raiz1, raiz2;

    if (a == 0) {
        printf("Esto no es una ecuación de segundo grado (a no puede ser 0).\n");
        return;
    }

    discriminante = (b * b) - (4 * a * c);

    if (discriminante > 0) {
        // Dos raíces reales diferentes
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Las raíces son reales y diferentes:\n");
        printf("Raíz 1: %.2f\n", raiz1);
        printf("Raíz 2: %.2f\n", raiz2);
    } else if (discriminante == 0) {
        // Una raíz real (doble)
        raiz1 = -b / (2 * a);
        printf("Las raíces son reales e iguales:\n");
        printf("Raíz: %.2f\n", raiz1);
    } else {
        // Raíces complejas
        float parteReal = -b / (2 * a);
        float parteImaginaria = sqrt(-discriminante) / (2 * a);
        printf("Las raíces son complejas:\n");
        printf("Raíz 1: %.2f + %.2fi\n", parteReal, parteImaginaria);
        printf("Raíz 2: %.2f - %.2fi\n", parteReal, parteImaginaria);
    }
}

int main() {
    float a, b, c;

    printf("Introduce el coeficiente a: ");
    scanf("%f", &a);

    printf("Introduce el coeficiente b: ");
    scanf("%f", &b);

    printf("Introduce el coeficiente c: ");
    scanf("%f", &c);

    resolverEcuacionSegundoGrado(a, b, c);

    return 0;
}
