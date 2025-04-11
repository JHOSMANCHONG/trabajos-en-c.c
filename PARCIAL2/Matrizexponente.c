#include <stdio.h>

#define MAX 10 

void leerTamanoMatriz(int *n);
void leerMatriz(int n, int matriz[MAX][MAX]);
void inicializarIdentidad(int n, int matriz[MAX][MAX]);
void elevarMatriz(int n, int matriz[MAX][MAX], int resultado[MAX][MAX], int exponente);
void multiplicarMatrices(int n, int A[MAX][MAX], int B[MAX][MAX], int resultado[MAX][MAX]);
void imprimirMatriz(int n, int matriz[MAX][MAX]);

int main() {
    int n, exponente;
    int matriz[MAX][MAX], resultado[MAX][MAX];

    leerTamanoMatriz(&n);
    if (n > MAX) {
        printf("El tamaño máximo permitido es %d.\n", MAX);
        return 1;
    }

    leerMatriz(n, matriz);

    printf("\nIntroduce el exponente al que quieres elevar la matriz: ");
    scanf("%d", &exponente);

    
    elevarMatriz(n, matriz, resultado, exponente);

    printf("\nLa matriz elevada al exponente %d es:\n", exponente);
    imprimirMatriz(n, resultado);

    return 0;
}

void leerTamanoMatriz(int *n) {
    printf("Introduce el tamaño de la matriz cuadrada (n x n, donde n <= %d): ", MAX);
    scanf("%d", n);
}

void leerMatriz(int n, int matriz[MAX][MAX]) {
    printf("\nIntroduce los elementos de la matriz (%dx%d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void inicializarIdentidad(int n, int matriz[MAX][MAX]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = (i == j) ? 1 : 0;
        }
    }
}

void elevarMatriz(int n, int matriz[MAX][MAX], int resultado[MAX][MAX], int exponente) {
    if (exponente == 0) {
        inicializarIdentidad(n, resultado);
    } else {
        int temp[MAX][MAX];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                resultado[i][j] = matriz[i][j];
            }
        }

        for (int p = 1; p < exponente; p++) {
            multiplicarMatrices(n, resultado, matriz, temp);
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    resultado[i][j] = temp[i][j];
                }
            }
        }
    }
}

void multiplicarMatrices(int n, int A[MAX][MAX], int B[MAX][MAX], int resultado[MAX][MAX]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < n; k++) {
                resultado[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void imprimirMatriz(int n, int matriz[MAX][MAX]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
