#include <stdio.h>  // Biblioteca estándar para entrada y salida
#include <math.h>   // Biblioteca para funciones matemáticas 

// Estructura para almacenar las raíces de una ecuación cuadrática
struct Raices {
    float real1;      // Almacena la primera raíz real
    float real2;      // Almacena la segunda raíz real
    float imaginaria; // Parte imaginaria de la raíz (en caso de ser compleja)
};

int main() {
    int n; // Variable para guardar el número de ecuaciones a resolver

    // Solicita al usuario el número de ecuaciones cuadráticas que desea resolver
    printf("Ingrese el número de ecuaciones cuadráticas a resolver: ");
    scanf("%d", &n); // Lee el valor ingresado por el usuario y lo guarda en 'n'

    // Crea un arreglo de estructuras para almacenar las soluciones de cada ecuación
    struct Raices soluciones[n];

    // Bucle para procesar cada ecuación cuadrática
    for (int i = 0; i < n; i++) {
        float a, b, c, discriminante; // Variables para coeficientes y discriminante

        // Solicita los coeficientes 'a', 'b' y 'c' al usuario
        printf("Ecuación %d:\n", i + 1);
        printf("Ingrese el coeficiente a: ");
        scanf("%f", &a);
        printf("Ingrese el coeficiente b: ");
        scanf("%f", &b);
        printf("Ingrese el coeficiente c: ");
        scanf("%f", &c);

        // Calcula el discriminante (b^2 - 4ac)
        discriminante = b * b - 4 * a * c;

        // Determina si las raíces son reales o complejas
        if (discriminante >= 0) {  // Si el discriminante es mayor o igual a 0
            soluciones[i].real1 = (-b + sqrtf(discriminante)) / (2 * a); // Primera raíz real
            soluciones[i].real2 = (-b - sqrtf(discriminante)) / (2 * a); // Segunda raíz real
            soluciones[i].imaginaria = 0.0f; // No hay parte imaginaria
            printf("Raíces reales: %.2f y %.2f\n", soluciones[i].real1, soluciones[i].real2);
        } else {  // Si el discriminante es menor a 0 (raíces complejas)
            soluciones[i].real1 = -b / (2 * a); // Parte real común
            soluciones[i].real2 = soluciones[i].real1; // Ambas raíces tienen la misma parte real
            soluciones[i].imaginaria = sqrtf(-discriminante) / (2 * a); // Parte imaginaria
            printf("Raíces complejas: %.2f + %.2fi y %.2f - %.2fi\n",
                   soluciones[i].real1, soluciones[i].imaginaria,
                   soluciones[i].real2, soluciones[i].imaginaria);
        }
    }

    // Imprime los resultados almacenados en el arreglo
    printf("\nResultados almacenados:\n");
    for (int i = 0; i < n; i++) {
        if (soluciones[i].imaginaria == 0.0f) {  // Si las raíces son reales
            printf("Ecuación %d: Raíces reales: %.2f y %.2f\n",
                   i + 1, soluciones[i].real1, soluciones[i].real2);
        } else {  // Si las raíces son complejas
            printf("Ecuación %d: Raíces complejas: %.2f + %.2fi y %.2f - %.2fi\n",
                   i + 1, soluciones[i].real1, soluciones[i].imaginaria,
                   soluciones[i].real2, soluciones[i].imaginaria);
        }
    }

    return 0; // Termina el programa
}
