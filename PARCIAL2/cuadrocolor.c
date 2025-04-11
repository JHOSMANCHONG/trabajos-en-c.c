#include <stdio.h>

int main() {
    int n;

    printf("Ingrese el tamaño del cuadrado (n x n): ");
    scanf("%d", &n);

    const char *colores[] = {
        "\033[41m", 
        "\033[42m", 
        "\033[43m", 
        "\033[44m", 
        "\033[45m", 
        "\033[46m", 
        "\033[47m", 
        "\033[48;5;8m", 
        "\033[48;5;9m", 
        "\033[48;5;10m", 
        "\033[48;5;11m", 
        "\033[48;5;12m", 
        "\033[48;5;13m", 
        "\033[48;5;14m", 
        "\033[48;5;15m"  
    };

    int num_colores = sizeof(colores) / sizeof(colores[0]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            printf("%s  \033[0m", colores[(i * n + j) % num_colores]); 
        }
        printf("\n");
    }

    return 0;
}