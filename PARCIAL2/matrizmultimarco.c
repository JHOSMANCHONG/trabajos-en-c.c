#include <stdio.h>

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

void clearScreen() {
    printf("\033[2J");
}

void llenarMatriz(const char *nombre, int matriz[3][3]) {
    printf("Introduce los valores de la %s:\n", nombre);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatrizEnPosicion(int x, int y, const char *nombre, int matriz[3][3]) {
    gotoxy(x + 2, y);
    printf("%s", nombre);
    for (int i = 0; i < 3; i++) {
        gotoxy(x, y + 1 + i);
        printf("*");
        for (int j = 0; j < 3; j++) {
            gotoxy(x + 2 + j * 4, y + 1 + i);
            printf("%3d", matriz[i][j]);
        }
        gotoxy(x + 14, y + 1 + i);
        printf("*");
    }
}

void sumarMatrices(int a[3][3], int b[3][3], int r[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            r[i][j] = a[i][j] + b[i][j];
}

void restarMatrices(int a[3][3], int b[3][3], int r[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            r[i][j] = a[i][j] - b[i][j];
}

void escalarMatriz(int a[3][3], int escalar, int r[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            r[i][j] = a[i][j] * escalar;
}

int determinanteSarrus(int m[3][3]) {
    int det = 0;
    det += m[0][0]*m[1][1]*m[2][2] + m[0][1]*m[1][2]*m[2][0] + m[0][2]*m[1][0]*m[2][1];
    det -= m[0][2]*m[1][1]*m[2][0] + m[0][1]*m[1][0]*m[2][2] + m[0][0]*m[1][2]*m[2][1];
    return det;
}

int main() {
    int matrizA[3][3], matrizB[3][3], resultado[3][3];
    int opcion, escalar;

    printf("Seleccione una operación:\n");
    printf("1. Suma\n2. Resta\n3. Producto por escalar\n4. Determinante (Sarrus)\nOpción: ");
    scanf("%d", &opcion);

    clearScreen();

    switch (opcion) {
        case 1:
            llenarMatriz("Matriz A", matrizA);
            llenarMatriz("Matriz B", matrizB);
            sumarMatrices(matrizA, matrizB, resultado);
            clearScreen();
            imprimirMatrizEnPosicion(5, 2, "Matriz A", matrizA);
            imprimirMatrizEnPosicion(30, 2, "Matriz B", matrizB);
            imprimirMatrizEnPosicion(55, 2, "A + B", resultado);
            break;

        case 2:
            llenarMatriz("Matriz A", matrizA);
            llenarMatriz("Matriz B", matrizB);
            restarMatrices(matrizA, matrizB, resultado);
            clearScreen();
            imprimirMatrizEnPosicion(5, 2, "Matriz A", matrizA);
            imprimirMatrizEnPosicion(30, 2, "Matriz B", matrizB);
            imprimirMatrizEnPosicion(55, 2, "A - B", resultado);
            break;

        case 3:
            llenarMatriz("Matriz A", matrizA);
            printf("Ingrese el valor escalar: ");
            scanf("%d", &escalar);
            escalarMatriz(matrizA, escalar, resultado);
            clearScreen();
            imprimirMatrizEnPosicion(5, 2, "Matriz A", matrizA);
            imprimirMatrizEnPosicion(30, 2, "Esc*A", resultado);
            break;

        case 4:
            llenarMatriz("Matriz A", matrizA);
            clearScreen();
            imprimirMatrizEnPosicion(5, 2, "Matriz A", matrizA);
            gotoxy(5, 7);
            printf("Determinante (Sarrus): %d", determinanteSarrus(matrizA));
            break;

        default:
            printf("Opción inválida.\n");
            return 1;
    }

    gotoxy(0, 15);
    return 0;
}
