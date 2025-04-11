#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3

void llenarMatriz(int matriz[FILAS][COLUMNAS]);
void transponerMatriz(int matriz[FILAS][COLUMNAS], int transpuesta[COLUMNAS][FILAS]);
void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]);

int main() {
    int matriz[FILAS][COLUMNAS];
    int transpuesta[COLUMNAS][FILAS];

    llenarMatriz(matriz);

    transponerMatriz(matriz, transpuesta);

    printf("\nMatriz ingresada:\n");
    imprimirMatriz(FILAS, COLUMNAS, matriz);

    printf("\nMatriz transpuesta:\n");
    imprimirMatriz(COLUMNAS, FILAS, transpuesta);

    return 0;
}

void llenarMatriz(int matriz[FILAS][COLUMNAS]) {
    printf("Ingresa los números para una matriz de %dx%d:\n", FILAS, COLUMNAS);
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Número [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void transponerMatriz(int matriz[FILAS][COLUMNAS], int transpuesta[COLUMNAS][FILAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
}
void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
