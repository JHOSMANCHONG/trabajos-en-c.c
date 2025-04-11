#include <stdio.h>
#include <math.h>

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

void calculadora() { /* ... */ }
void cuadroAsteriscos() { /* ... */ }
void cuadroNumeros() { /* ... */ }
void diagonales() { /* ... */ }
void escape() { /* ... */ }
void promedioLeerDatos() { /* ... */ }
void promedio() { /* ... */ }
void pruebaSwitch() { /* ... */ }
void pruebaSwitch2() { /* ... */ }
void tablaMultiplicar() { /* ... */ }
void temperaturaEnteros() { /* ... */ }
void temperaturaFlotante() { /* ... */ }
void tiposDatos() { /* ... */ }
void trapecio() { /* ... */ }
void trianguloEquilatero() { /* ... */ }
void trianguloRectangulo() { /* ... */ }
void trianguloRectangulo2() {
    int asteriscos = 1;
    for (int i = 6; i >= 0; i--) {
        for (int k = 6; k >= asteriscos; k--) {
            printf("%5s", " ");
        }
        for (int j = 1; j <= asteriscos; j++) {
            printf("%5s", "*");
        }
        asteriscos++;
        printf("\n");
    }
}

void factorial() { /* ... */ }
void volumenFiguras() { /* ... */ }

int main() {
    int opcion;
    do {
        printf("\nSeleccione una opcion:\n");
        printf("1. Calculadora\n");
        printf("2. Cuadro de asteriscos\n");
        printf("3. Cuadro de numeros\n");
        printf("4. Diagonales\n");
        printf("5. Secuencias de escape\n");
        printf("6. Promedio con lectura de datos\n");
        printf("7. Promedio predefinido\n");
        printf("8. Prueba de switch (enteros)\n");
        printf("9. Prueba de switch (caracteres)\n");
        printf("10. Tabla de multiplicar\n");
        printf("11. Temperatura (enteros)\n");
        printf("12. Temperatura (flotantes)\n");
        printf("13. Tipos de datos\n");
        printf("14. Trapecio\n");
        printf("15. Triangulo equilatero\n");
        printf("16. Triangulo rectangulo\n");
        printf("17. Triangulo rectangulo 2\n");
        printf("18. Volumen de figuras\n");
        printf("0. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: calculadora(); break;
            case 2: cuadroAsteriscos(); break;
            case 3: cuadroNumeros(); break;
            case 4: diagonales(); break;
            case 5: escape(); break;
            case 6: promedioLeerDatos(); break;
            case 7: promedio(); break;
            case 8: pruebaSwitch(); break;
            case 9: pruebaSwitch2(); break;
            case 10: tablaMultiplicar(); break;
            case 11: temperaturaEnteros(); break;
            case 12: temperaturaFlotante(); break;
            case 13: tiposDatos(); break;
            case 14: trapecio(); break;
            case 15: trianguloEquilatero(); break;
            case 16: trianguloRectangulo(); break;
            case 17: trianguloRectangulo2(); break;
            case 18: volumenFiguras(); break;
            case 0: printf("Saliendo...\n"); break;
            default: printf("Opcion invalida.\n");
        }
    } while (opcion != 0);
    return 0;
} 