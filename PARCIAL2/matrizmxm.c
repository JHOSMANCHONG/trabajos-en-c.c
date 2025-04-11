#include <stdio.h>

#define MAX 10 

int obtenerTamano();
void llenarMatriz(int m, int matriz[MAX][MAX], const char *nombre);
void multiplicarMatrices(int m, int matriz1[MAX][MAX], int matriz2[MAX][MAX], int resultado[MAX][MAX]);
void imprimirMatriz(int m, int matriz[MAX][MAX], const char *nombre);

int main() {
    int m;
    int matriz1[MAX][MAX], matriz2[MAX][MAX], resultado[MAX][MAX] = {0};

    m = obtenerTamano();
    if (m > MAX) {
        printf("El tamaño máximo permitido es %d.\n", MAX);
        return 1;
    }

    llenarMatriz(m, matriz1, "primera");
    llenarMatriz(m, matriz2, "segunda");

    multiplicarMatrices(m, matriz1, matriz2, resultado);

    imprimirMatriz(m, matriz1, "Primera matriz");
    imprimirMatriz(m, matriz2, "Segunda matriz");
    imprimirMatriz(m, resultado, "Resultado de la multiplicación");

    return 0;
}


int obtenerTamano() {
    int m;
    printf("Introduce el tamaño de las matrices (m x m, que sea m <= %d): ", MAX);
    scanf("%d", &m);
    return m;
}

void llenarMatriz(int m, int matriz[MAX][MAX], const char *nombre) {
    printf("\nIntroduce los elementos de la %s matriz (%dx%d):\n", nombre, m, m);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void multiplicarMatrices(int m, int matriz1[MAX][MAX], int matriz2[MAX][MAX], int resultado[MAX][MAX]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < m; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

void imprimirMatriz(int m, int matriz[MAX][MAX], const char *nombre) {
    printf("\n%s:\n", nombre);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
