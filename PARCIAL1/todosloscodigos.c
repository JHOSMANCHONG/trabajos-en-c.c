#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    int opcion;
    do {
        printf("\n--- MENU DE PROGRAMAS ---\n");
        printf("1. Calculadora\n2. Cuadro de asteriscos\n3. Cuadro de numeros\n4. Diagonales\n5. Secuencias de escape\n");
        printf("6. Promedio (leer datos)\n7. Promedio\n8. Prueba de switch\n9. Prueba de switch 2\n10. Tabla de multiplicar\n");
        printf("11. Temperatura en enteros\n12. Temperatura en flotantes\n13. Tipos de datos\n14. Trapecio\n15. Triangulo equilatero\n");
        printf("16. Triangulo rectangulo\n17. Triangulo rectangulo 2\n18. Volumen de figuras\n0. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: { // Calculadora
                float num1, num2, resultado;
                char operador;
                printf("Introduce el primer numero: ");
                scanf("%f", &num1);
                printf("Introduce el segundo numero: ");
                scanf("%f", &num2);
                printf("Introduce una operacion (+, -, *, /): ");
                scanf(" %c", &operador);
                switch (operador) {
                    case '+': resultado = num1 + num2; break;
                    case '-': resultado = num1 - num2; break;
                    case '*': resultado = num1 * num2; break;
                    case '/':
                        if (num2 != 0) resultado = num1 / num2;
                        else { printf("Error: Division por cero no permitida.\n"); return 0; }
                        break;
                    default: printf("Operador no valido.\n"); return 0;
                }
                printf("Resultado: %.2f\n", resultado);
                return 0;
            }

            case 2: { // Cuadro de asteriscos
                for (int a = 0; a <= 9; a++) printf("%3s", "*");
                printf("\n");
                for (int b = 1; b <= 7; b++) {
                    printf("%3s", "*");
                    for (int c = 1; c <= 8; c++) printf("%3s", " ");
                    printf("%3s", "*");
                    printf("\n");
                }
                for (int a = 0; a <= 9; a++) printf("%3s", "*");
                printf("\n");
                return 0;
            }

            case 3: { // Cuadro de números
                int contador = 0, limite = 10;
                printf("%4s\n", "Ejemplo de impresion");
                while (contador <= limite) printf("%4d", contador++);
                printf("\n%s\n", "ejemplo de impresion");
                int limitey = 10;
                while (limitey >= 0) {
                    int limitex = 10;
                    while (limitex >= 0) printf("%4d", limitex--);
                    printf("\n");
                    limitey--;
                }
                printf("\n%s\n", "ejemplo de impresion");
                limitey = 0;
                while (limitey <= 10) {
                    int limitex = 0;
                    while (limitex <= 10) printf("%4d", limitex++);
                    printf("\n");
                    limitey++;
                }
                printf("\n%s\n", "ejemplo de impresion");
                return 0;
            }

            case 4: { // Diagonales
                int espacio = 1;
                for (int a = 9; a >= 0; a--) {
                    for (int b = 2; b <= espacio; b++) printf("%4s", " ");
                    espacio++;
                    printf("%4s", "*");
                    printf("\n");
                }
                return 0;
            }

            case 5: { // Secuencias de escape
                printf("\\a Alarma\n");
                printf("\\b Retroceso\n");
                printf("\\f Avance de pagina\n");
                printf("\\n Retorno de carro y avance de linea\n");
                printf("\\r Retorno de carro\n");
                printf("\\t Tabulacion\n");
                printf("\\\\ Diagonal invertida\n");
                printf("\\? Signo de interrogacion\n");
                printf("\\\" Comillas dobles\n");
                printf("\\000 Octal\n");
                printf("\\xhh Hexadecimal\n");
                printf("\\0 Caracter nulo\n");
                return 0;
            }

            case 6: { // Promedio (leer datos)
                char nombre[50];
                printf("%s\n", "Ingrese su nombre: ");
                scanf("%s", nombre);

                int cal1;
                printf("%s", "Ingresa la calificacion 1: ");
                scanf("%d", &cal1);

                int cal2;
                printf("%s", "Ingresa la calificacion 2: ");
                scanf("%d", &cal2);

                int cal3;
                printf("%s", "Ingresa la calificacion 3: ");
                scanf("%d", &cal3);

                float promedio = (cal1 + cal2 + cal3) / 3;
                printf("%s%s", "Nombre:", nombre);
                printf("\n");
                printf("%s%2f", "El promedio es:\n", promedio);
                printf("\n");

                if (promedio >= 6) {
                    printf("%s\n", "APROBADO!");
                } else {
                    printf("%s\n", "REPROBADO :(");
                }
                return 0;
            }

            case 7: { // Promedio
                int calif1 = 6, calif2 = 8, calif3 = 10;
                printf("%s\n%d\n%s\n%d\n%s\n%d\n", "calificacion 1:", calif1, "calificacion 2:", calif2, "calificacion 3:", calif3);
                float promedio = (calif1 + calif2 + calif3) / 3.0;
                printf("%s%.2f\n", "Tu promedio es: ", promedio);
                return 0;
            }

            case 8: { // Prueba de switch
                int opc;
                printf("%s\n", "seleccione una opcion");
                printf("%s\n", "1-sumar");
                printf("%s\n", "2-restar");
                scanf("%d", &opc);
                switch (opc) {
                    case 1: printf("%s\n", "ha seleccionado suma"); break;
                    case 2: printf("%s\n", "ha seleccionado resta"); break;
                    default: printf("%s\n", "no ha seleccionado una opcion valida"); break;
                }
                return 0;
            }

            case 9: { // Prueba de switch 2
                char opc;
                printf("%s\n", "seleccione una opcion");
                printf("%s\n", "a) Seleccionar opcion 1");
                printf("%s\n", "b) seleccionar opcion 2");
                scanf(" %c", &opc);
                switch (opc) {
                    case 'a': printf("%s\n", "seleccione opc1"); break;
                    case 'b': printf("%s\n", "selecciona opc 2"); break;
                    default: printf("%s\n", "Opcion invalida"); break;
                }
                return 0;
            }

            case 10: { // Tabla de multiplicar
                int tabla = 0;
                while (tabla <= 10) {
                    int numero = 0;
                    while (numero <= 10) {
                        printf("(%d) (%d)=%d\n", tabla, numero, numero * tabla);
                        numero++;
                    }
                    tabla++;
                }
                return 0;
            }

            case 11: { // Temperatura en enteros
                int fahr, celsius, lower = 0, upper = 300, step = 20;
                fahr = lower;
                while (fahr <= upper) {
                    celsius = 5 * (fahr - 32) / 9;
                    printf("%d\t%d\n", fahr, celsius);
                    fahr += step;
                }
                return 0;
            }

            case 12: { // Temperatura en flotantes
                float fahr, celsius;
                int lower = 0, upper = 300, step = 20;
                fahr = lower;
                while (fahr <= upper) {
                    celsius = (5.0 / 9.0) * (fahr - 32.0);
                    printf("%3.0f%6.1f\n", fahr, celsius);
                    fahr += step;
                }
                return 0;
            }

            case 13: { // Tipos de datos
                printf("%d Imprime datos enteros decimales: 5\n", 5);
                printf("%i Imprime datos enteros: 2\n", 2);
                printf("%o Imprime datos octales: 6\n", 6);
                printf("%x Imprime datos hexadecimales: 8A1\n", 0x8A1);
                printf("%u Imprime datos enteros sin signo en decimal: 23\n", 23);
                printf("%c Imprime datos de caracteres: #\n", '#');
                printf("%e Imprime datos reales expresados en base y exponente: 5^2\n", 5e2);
                printf("%f Imprime datos reales escrito con punto decimal: 23.12\n", 23.12);
                printf("%g Imprime datos reales: 14\n", 14.0);
                printf("%s Imprime cadenas de caracteres: Hola123\n", "Hola123");
                printf("%Lf Imprime datos reales de tipo long double: 2.1646466565466642\n", 2.1646466565466642L);
                return 0;
            }

            case 14: { // Trapecio
                int espacios = 3, asteriscos = 3;
                for (int i = 3; i >= 0; i--) {
                    for (int j = 1; j <= espacios; j++) printf("%5s", " ");
                    for (int k = 1; k <= asteriscos; k++) printf("%5s", "*");
                    asteriscos += 2;
                    espacios--;
                    printf("\n");
                }
                return 0;
            }

            case 15: { // Triángulo equilátero
                int espacios = 6, asteriscos = 0;
                for (int i = 6; i >= 0; i--) {
                    for (int j = 1; j <= espacios; j++) printf("%5s", " ");
                    for (int k = 0; k <= asteriscos; k++) printf("%5s", "*");
                    asteriscos += 2;
                    espacios--;
                    printf("\n");
                }
                return 0;
            }

            case 16: { // Triángulo rectángulo
                int asteriscos = 1;
                for (int i = 6; i >= 0; i--) {
                    for (int j = 1; j <= asteriscos; j++) printf("%5s", "*");
                    asteriscos++;
                    printf("\n");
                }
                return 0;
            }

            case 17: { // Triángulo rectángulo 2
                int asteriscos = 1;
                for (int i = 6; i >= 0; i--) {
                    for (int k = 6; k >= asteriscos; k--) printf("%5s", " ");
                    for (int j = 1; j <= asteriscos; j++) printf("%5s", "*");
                    asteriscos++;
                    printf("\n");
                }
                return 0;
            }

            case 18: { // Volumen de figuras
                int opcion;
                float radio, altura;
                printf("Calculadora de Volumenes\n1. Esfera\n2. Cono\n3. Cilindro\n0. Salir\n");
                do {
                    printf("\nIntroduce una opcion: ");
                    scanf("%d", &opcion);
                    switch (opcion) {
                        case 1:
                            printf("Introduce el radio de la esfera: ");
                            scanf("%f", &radio);
                            printf("Volumen de la esfera: %.2f\n", (4.0 / 3.0) * M_PI * pow(radio, 3));
                            break;
                        case 2:
                            printf("Introduce el radio de la base del cono: ");
                            scanf("%f", &radio);
                            printf("Introduce la altura del cono: ");
                            scanf("%f", &altura);
                            printf("Volumen del cono: %.2f\n", (1.0 / 3.0) * M_PI * pow(radio, 2) * altura);
                            break;
                        case 3:
                            printf("Introduce el radio de la base del cilindro: ");
                            scanf("%f", &radio);
                            printf("Introduce la altura del cilindro: ");
                            scanf("%f", &altura);
                            printf("Volumen del cilindro: %.2f\n", M_PI * pow(radio, 2) * altura);
                            break;
                        case 0: printf("Saliendo...\n"); break;
                        default: printf("Opcion no valida. Intenta de nuevo.\n"); break;
                    }
                } while (opcion != 0);
                return 0;
            }

            case 0:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida. Intenta de nuevo.\n");
                break;
        }
    } while (opcion != 0);

    return 0;
}
