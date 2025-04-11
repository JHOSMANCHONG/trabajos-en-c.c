#include <stdio.h>

#define FILAS 2
#define COLUMNAS 2

int mcd(int a, int b);
void simplificarFraccion(int *numerador, int *denominador);
void llenarMatriz(int filas, int columnas, int numerador[filas][columnas], int denominador[filas][columnas], const char *nombre);
void multiplicarMatrices(int filas, int columnas, int numerador1[filas][columnas], int denominador1[filas][columnas], int numerador2[filas][columnas], int denominador2[filas][columnas], int resultadoNumerador[filas][columnas], int resultadoDenominador[filas][columnas]);
void imprimirMatriz(int filas, int columnas, int numerador[filas][columnas], int denominador[filas][columnas], const char *nombre);

int main() {
    int matriz1Numerador[FILAS][COLUMNAS], matriz1Denominador[FILAS][COLUMNAS];
    int matriz2Numerador[FILAS][COLUMNAS], matriz2Denominador[FILAS][COLUMNAS];
    int resultadoNumerador[FILAS][COLUMNAS], resultadoDenominador[FILAS][COLUMNAS];

    llenarMatriz(FILAS, COLUMNAS, matriz1Numerador, matriz1Denominador, "primera");
    llenarMatriz(FILAS, COLUMNAS, matriz2Numerador, matriz2Denominador, "segunda");

    multiplicarMatrices(FILAS, COLUMNAS, matriz1Numerador, matriz1Denominador, matriz2Numerador, matriz2Denominador, resultadoNumerador, resultadoDenominador);

    imprimirMatriz(FILAS, COLUMNAS, resultadoNumerador, resultadoDenominador, "Resultado de la multiplicación (simplificado)");

    return 0;
}


int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void simplificarFraccion(int *numerador, int *denominador) {
    int divisor = mcd(*numerador, *denominador);
    *numerador /= divisor;
    *denominador /= divisor;
}

void llenarMatriz(int filas, int columnas, int numerador[filas][columnas], int denominador[filas][columnas], const char *nombre) {
    printf("\nIntroduce los elementos de la %s matriz (numerador y denominador):\n", nombre);
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Elemento [%d][%d] - Numerador: ", i, j);
            scanf("%d", &numerador[i][j]);
            printf("Elemento [%d][%d] - Denominador: ", i, j);
            scanf("%d", &denominador[i][j]);
        }
    }
}

void multiplicarMatrices(int filas, int columnas, int numerador1[filas][columnas], int denominador1[filas][columnas], int numerador2[filas][columnas], int denominador2[filas][columnas], int resultadoNumerador[filas][columnas], int resultadoDenominador[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultadoNumerador[i][j] = numerador1[i][j] * numerador2[i][j];
            resultadoDenominador[i][j] = denominador1[i][j] * denominador2[i][j];
            simplificarFraccion(&resultadoNumerador[i][j], &resultadoDenominador[i][j]);
        }
    }
}

void imprimirMatriz(int filas, int columnas, int numerador[filas][columnas], int denominador[filas][columnas], const char *nombre) {
    printf("\n%s:\n", nombre);
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Elemento [%d][%d]: %d/%d\n", i, j, numerador[i][j], denominador[i][j]);
        }
    }
}
