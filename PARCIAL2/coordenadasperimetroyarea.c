#include <stdio.h>  // Biblioteca estándar para entrada/salida
#include <math.h>   // Biblioteca matemática para usar sqrt (raíz cuadrada)

// Estructura para almacenar las coordenadas (x, y)
struct Coordenada {
    float x, y; // Coordenadas del punto en el plano
};

int main() {
    int opcion; // Variable para que el usuario seleccione la figura

    // Menú para que el usuario elija entre cuadrado o triángulo
    printf("Seleccione una figura para calcular:\n");
    printf("1. Cuadrado\n");          // Opción 1: Cuadrado
    printf("2. Triángulo equilátero\n"); // Opción 2: Triángulo equilátero
    printf("Opción: ");
    scanf("%d", &opcion); // Leer la opción seleccionada por el usuario

    if (opcion == 1) {
        // Caso 1: Calcular para un cuadrado
        struct Coordenada puntos[4]; // Arreglo de 4 vértices para el cuadrado
        float lado, perimetro, area;

        // Solicitar las coordenadas de los 4 vértices del cuadrado
        printf("Ingrese las coordenadas del cuadrado (una por cuadrante):\n");
        for (int i = 0; i < 4; i++) { // Iterar sobre cada cuadrante
            printf("Coordenada para el cuadrante %d (x y): ", i + 1);
            scanf("%f %f", &puntos[i].x, &puntos[i].y); // Leer x e y del vértice
        }

        // Calcular el lado del cuadrado (distancia entre dos vértices consecutivos)
        lado = sqrt((puntos[1].x - puntos[0].x) * (puntos[1].x - puntos[0].x) +
                    (puntos[1].y - puntos[0].y) * (puntos[1].y - puntos[0].y));
        // Fórmula del perímetro: suma de los 4 lados
        perimetro = 4 * lado;

        // Fórmula del área: lado al cuadrado
        area = lado * lado;

        // Imprimir los resultados del cuadrado
        printf("\nPerímetro del cuadrado: %.2f\n", perimetro);
        printf("Área del cuadrado: %.2f\n", area);

    } else if (opcion == 2) {
        // Caso 2: Calcular para un triángulo equilátero
        struct Coordenada puntos[3]; // Arreglo de 3 vértices para el triángulo
        float lado, perimetro, area;

        // Solicitar las coordenadas de los 3 vértices del triángulo
        printf("Ingrese las coordenadas del triángulo (una por cuadrante):\n");
        for (int i = 0; i < 3; i++) { // Iterar sobre cada vértice
            printf("Coordenada para el cuadrante %d (x y): ", i + 1);
            scanf("%f %f", &puntos[i].x, &puntos[i].y); // Leer x e y del vértice
        }

        // Calcular el lado del triángulo (distancia entre dos vértices consecutivos)
        lado = sqrt((puntos[1].x - puntos[0].x) * (puntos[1].x - puntos[0].x) +
                    (puntos[1].y - puntos[0].y) * (puntos[1].y - puntos[0].y));
        // Fórmula del perímetro: suma de los 3 lados
        perimetro = 3 * lado;

        // Fórmula del área de un triángulo equilátero: (raíz de 3 / 4) * lado²
        area = (sqrt(3) / 4) * lado * lado;

        // Imprimir los resultados del triángulo
        printf("\nPerímetro del triángulo: %.2f\n", perimetro);
        printf("Área del triángulo: %.2f\n", area);

    } else {
        // Caso de opción no válida
        printf("Opción no válida. Por favor, seleccione 1 o 2.\n");
    }

    return 0; // Fin del programa
}
