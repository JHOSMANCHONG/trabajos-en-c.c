#include <stdio.h>

struct Tabla {
    int valor1;
    int valor2;
    int resultado;
};

int main() {
    // Arreglo de estructuras correctamente inicializado con comas
    struct Tabla arreglo[3] = {
        {1, 3, 0},
        {2, 3, 0},
        {3, 3, 0}
    };

    // Calcular el resultado como multiplicación de valor1 y valor2
    for (int i = 0; i < 3; i++) {
        int resultado = arreglo[i].valor1 * arreglo[i].valor2;
        arreglo[i].resultado = resultado;
    }

    // Imprimir los resultados
    for (int i = 0; i < 3; i++) {
        printf("%d x %d = %d\n",
            arreglo[i].valor1,
            arreglo[i].valor2,
            arreglo[i].resultado);
    }

    return 0;
}
