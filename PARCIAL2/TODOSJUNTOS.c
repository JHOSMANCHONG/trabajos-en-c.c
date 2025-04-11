#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>   
#include <string.h> 


void numerosRetornaMayor();
void apuntador1();
void apuntador2();
void apuntadorProfe();
void apuntadorProfe2();
void apuntadorTarea();
void arregloEstructura();
void arregloLeer();
void arreglos();
void banderaEU();
void banderaMexicana();
void calculadoraGotoxy();
void calculadoraFuncional();
void claveValor();
void constanteApuntador();
void conversionDivisa();
void coordenadaPerimetroYArea();
void cuadroColor();
void ecuacionCuadraticaEstructura();
void ecuacionCuadraticaScan();
void ecuacionesSegundoGrado();
void estrellaBarco();
void estructuraDeclarativa();
void estructuraEstudiante();
void estructuraImpresion();
void estructuraImpresionPerros();
void estructuraUnion();
void estructuraDobleAnidada();
void exponenciales();
void funciones();
void gotoxy(int x, int y);
void intervalosPares();
void intervalosImpares();
void matrizExponente();
void matrizFuncion();
void matrizFuncion2();
void matrizmultimarco();
void matrizmxm();
void Menuunionmatriz();
void multielementos();
void multiplicacionestructura();
void multiplicacionmatrizvector();
void positivonegativo();
void raizcuadrada();
void retornopalabras();
void sumaImpar();
void sumaPar();
void sumaMultiElementos();
void tablaMultiplicar();
void temperaturaConversion();
void vectorMayorMenor();
void promedioVector();
void sumaDiagonalMatriz();
void valoresParesVector();
void valoresImparesVector();
void vectorMultiplicacion();
void busquedaValorVector();
void matrizOperaciones();
void sumaApuntadores(int *a, int *b);
void gotoxyleer();

int main() {
    int opcion;

    do {
        printf("\n--- Menú Principal ---\n");
        printf("1. numerosRetornaMayor\n");
        printf("2. apuntador1\n");
        printf("3. apuntador2\n");
        printf("4. apuntadorProfe\n");
        printf("5. apuntadorProfe2\n");
        printf("6. apuntadorTarea\n");
        printf("7. arregloEstructura\n");
        printf("8. arregloLeer\n");
        printf("9. arreglos\n");
        printf("10. banderaEU\n");
        printf("11. banderaMexicana\n");
        printf("12. calculadoraGotoxy\n");
        printf("13. calculadoraFuncional\n");
        printf("14. claveValor\n");
        printf("15. constanteApuntador\n");
        printf("16. conversionDivisa\n");
        printf("17. coordenadaPerimetroYArea\n");
        printf("18. cuadroColor\n");
        printf("19. ecuacionCuadraticaEstructura\n");
        printf("20. ecuacionCuadraticaScan\n");
        printf("21. ecuacionesSegundoGrado\n");
        printf("22. estrellaBarco\n");
        printf("23. estructuraDeclarativa\n");
        printf("24. estructuraEstudiante\n");
        printf("25. estructuraImpresion\n");
        printf("26. estructuraImpresionPerros\n");
        printf("27. estructuraUnion\n");
        printf("28. estructuraDobleAnidada\n");
        printf("29. exponenciales\n");
        printf("30. funciones\n");
        printf("31. gotoxy (Simulación de cursor)\n");
        printf("32. intervalosPares\n");
        printf("33. intervalosImpares\n");
        printf("34. matrizExponente\n");
        printf("35. matrizFuncion\n");
        printf("36. matrizFuncion2\n");
        printf("37. matrizmultimarco\n");
        printf("38. matrizmxm\n");
        printf("39. Menuunionmatriz\n");
        printf("40. multielementos\n");
        printf("41. multiplicacionestructura\n");
        printf("42. multiplicacionmatrizvector\n");
        printf("43. positivonegativo\n");
        printf("44. raizcuadrada\n");
        printf("45. retornopalabras\n");
        printf("46. sumaImpar\n");
        printf("47. sumaPar\n");
        printf("48. sumaMultiElementos\n");
        printf("49. tablaMultiplicar\n");
        printf("50. temperaturaConversion\n");
        printf("51. vectorMayorMenor\n");
        printf("52. promedioVector\n");
        printf("53. sumaDiagonalMatriz\n");
        printf("54. valoresParesVector\n");
        printf("55. valoresImparesVector\n");
        printf("56. vectorMultiplicacion\n");
        printf("57. busquedaValorVector\n");
        printf("58. matrizOperaciones\n");
        printf("59. sumaApuntadores\n");
        printf("60. gotoxyleer\n");
        printf("0. Salir\n");
    
        printf("Elige una opción: ");
        scanf("%d", &opcion);
    

        switch (opcion) {
            case 1: numerosRetornaMayor(); break;
            case 2: apuntador1(); break;
            case 3: apuntador2(); break;
            case 4: apuntadorProfe(); break;
            case 5: apuntadorProfe2(); break;
            case 6: apuntadorTarea(); break;
            case 7: arregloEstructura(); break;
            case 8: arregloLeer(); break;
            case 9: arreglos(); break;
            case 10: banderaEU(); break;
            case 11: banderaMexicana(); break;
            case 12: calculadoraGotoxy(); break;
            case 13: calculadoraFuncional(); break;
            case 14: claveValor(); break;
            case 15: constanteApuntador(); break;
            case 16: conversionDivisa(); break;
            case 17: coordenadaPerimetroYArea(); break;
            case 18: cuadroColor(); break;
            case 19: ecuacionCuadraticaEstructura(); break;
            case 20: ecuacionCuadraticaScan(); break;
            case 21: ecuacionesSegundoGrado(); break;
            case 22: estrellaBarco(); break;
            case 23: estructuraDeclarativa(); break;
            case 24: estructuraEstudiante(); break;
            case 25: estructuraImpresion(); break;
            case 26: estructuraImpresionPerros(); break;
            case 27: estructuraUnion(); break;
            case 28: estructuraDobleAnidada(); break;
            case 29: exponenciales(); break;
            case 30: funciones(); break;
            case 31: gotoxy(5, 5); break;
            case 32: intervalosPares(); break;
            case 33: intervalosImpares(); break;
            case 34: matrizExponente(); break;
            case 35: matrizFuncion(); break;
            case 36: matrizFuncion2(); break;
            case 37: matrizmultimarco(); break;
            case 38: matrizmxm(); break;
            case 39: Menuunionmatriz(); break;
            case 40: multielementos(); break;
            case 41: multiplicacionestructura(); break;
            case 42: multiplicacionmatrizvector(); break;
            case 43: positivonegativo(); break;
            case 44: raizcuadrada(); break;
            case 45: retornopalabras(); break;
            case 46: sumaImpar(); break;
            case 47: sumaPar(); break;
            case 48: sumaMultiElementos(); break;
            case 49: tablaMultiplicar(); break;
            case 50: temperaturaConversion(); break;
            case 51: vectorMayorMenor(); break;
            case 52: promedioVector(); break;
            case 53: sumaDiagonalMatriz(); break;  
            case 54: valoresParesVector(); break;  
            case 55: valoresImparesVector(); break;  
            case 56: vectorMultiplicacion(); break;  
            case 57: busquedaValorVector(); break;  
            case 58: matrizOperaciones(); break;  
            case 59: sumaApuntadores(&(int){5}, &(int){10}); break;  
            case 60: gotoxyleer(); break;  
            case 0: 
                printf("Saliendo del programa...\n");
                break;
            default: 
                printf("Opción no válida. Intenta de nuevo.\n");
                break;
    
        }
    } while (opcion != 0);

    return 0;
}
void numerosRetornaMayor() {
    int num1, num2;
    printf("Introduce el primer número: ");
    scanf("%d", &num1);
    printf("Introduce el segundo número: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("El número mayor es: %d\n", num1);
    } else if (num2 > num1) {
        printf("El número mayor es: %d\n", num2);
    } else {
        printf("Ambos números son iguales: %d\n", num1);
    }
}

void apuntador1() {
    int a = 10;
    int *ptr = &a;

    printf("El valor de la variable es: %d\n", a);
    printf("La dirección de memoria de la variable es: %p\n", (void*)&a);
    printf("El valor almacenado en el apuntador es: %d\n", *ptr);
}

void apuntador2() {
    int x, y;
    int *ptrX = &x, *ptrY = &y;

    printf("Introduce el valor de x: ");
    scanf("%d", &x);
    printf("Introduce el valor de y: ");
    scanf("%d", &y);

    printf("Suma de x e y usando apuntadores: %d\n", *ptrX + *ptrY);
}

void apuntadorProfe() {
    int num = 5;
    int *ptr = &num;

    printf("Valor original: %d\n", num);
    *ptr = 10; 
    printf("Nuevo valor usando apuntador: %d\n", num);
}


void apuntadorProfe2() {
    int a = 8, b = 12;
    int *ptrA = &a, *ptrB = &b;

    printf("Valores originales: a = %d, b = %d\n", a, b);
    *ptrA += 2; 
    *ptrB -= 2; 
    printf("Nuevos valores: a = %d, b = %d\n", a, b);
}

void apuntadorTarea() {
    int x, y, temp;
    int *ptrX = &x, *ptrY = &y;

    printf("Introduce el valor de x: ");
    scanf("%d", &x);
    printf("Introduce el valor de y: ");
    scanf("%d", &y);

    printf("Valores originales: x = %d, y = %d\n", x, y);
    temp = *ptrX;
    *ptrX = *ptrY;
    *ptrY = temp; 

    printf("Valores intercambiados: x = %d, y = %d\n", x, y);
}

void arregloEstructura() {
    struct Persona {
        char nombre[50];
        int edad;
    };

    struct Persona personas[3];
    for (int i = 0; i < 3; i++) {
        printf("Introduce el nombre de la persona %d: ", i + 1);
        scanf("%s", personas[i].nombre);
        printf("Introduce la edad de la persona %d: ", i + 1);
        scanf("%d", &personas[i].edad);
    }

    printf("\nInformación almacenada:\n");
    for (int i = 0; i < 3; i++) {
        printf("Persona %d: Nombre = %s, Edad = %d\n", i + 1, personas[i].nombre, personas[i].edad);
    }
}


void arregloLeer() {
    int arreglo[5];
    printf("Introduce 5 números:\n");
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    printf("\nValores almacenados:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor en posición %d: %d\n", i + 1, arreglo[i]);
    }
}

void arreglos() {
    int arreglo[5], maximo, suma = 0;
    printf("Introduce 5 números:\n");
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &arreglo[i]);
        suma += arreglo[i];
        if (i == 0 || arreglo[i] > maximo) {
            maximo = arreglo[i];
        }
    }

    printf("\nSuma de los elementos: %d\n", suma);
    printf("Valor máximo: %d\n", maximo);
}


void banderaEU() {
    for (int i = 0; i < 5; i++) {
        printf("******* ==========================\n");
    }
    for (int i = 0; i < 5; i++) {
        printf("=================================\n");
    }
}

void banderaMexicana() {
    for (int i = 0; i < 10; i++) { 
        for (int j = 0; j < 10; j++) {
            printf("*");  
        }
        for (int j = 0; j < 10; j++) {
            printf(" ");  
        }
        for (int j = 0; j < 10; j++) {
            printf("#"); 
        }
        printf("\n");
    }
}

void calculadoraGotoxy() {
    int x, y;
    char operador;
    float num1, num2, resultado;

    printf("Introduce las coordenadas (x, y) para posicionar el resultado: ");
    scanf("%d %d", &x, &y);

    printf("Introduce la operación ( +, -, *, / ): ");
    scanf(" %c", &operador);

    printf("Introduce el primer número: ");
    scanf("%f", &num1);
    printf("Introduce el segundo número: ");
    scanf("%f", &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Error: División por cero.\n");
                return;
            }
            break;
        default:
            printf("Operador inválido.\n");
            return;
    }

    gotoxy(x, y);  
    printf("Resultado: %.2f\n", resultado);
}

void calculadoraFuncional() {
    char operador;
    float num1, num2, resultado;

    printf("Introduce la operación ( +, -, *, / ): ");
    scanf(" %c", &operador);

    printf("Introduce el primer número: ");
    scanf("%f", &num1);
    printf("Introduce el segundo número: ");
    scanf("%f", &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Error: División por cero.\n");
                return;
            }
            break;
        default:
            printf("Operador inválido.\n");
            return;
    }

    printf("Resultado: %.2f\n", resultado);
}

void claveValor() {
    struct ClaveValor {
        char clave[50];
        char valor[50];
    };

    struct ClaveValor datos[3];
    for (int i = 0; i < 3; i++) {
        printf("Introduce la clave %d: ", i + 1);
        scanf("%s", datos[i].clave);
        printf("Introduce el valor %d: ", i + 1);
        scanf("%s", datos[i].valor);
    }

    printf("\nDatos almacenados:\n");
    for (int i = 0; i < 3; i++) {
        printf("Clave: %s, Valor: %s\n", datos[i].clave, datos[i].valor);
    }
}

void constanteApuntador() {
    const int valor = 100;
    int *ptr = (int*)&valor;  
    printf("Valor original: %d\n", valor);
    *ptr = 200; 
    printf("Valor modificado: %d\n", valor);  
}

void conversionDivisa() {
    float pesos, tasaCambio, resultado;
    char divisa[10];

    printf("Introduce la cantidad en pesos: ");
    scanf("%f", &pesos);
    printf("Introduce la tasa de cambio: ");
    scanf("%f", &tasaCambio);
    printf("Introduce la divisa objetivo: ");
    scanf("%s", divisa);

    resultado = pesos * tasaCambio;
    printf("La cantidad %.2f pesos equivale a %.2f %s\n", pesos, resultado, divisa);
}

void coordenadaPerimetroYArea() {
    float x1, y1, x2, y2, base, altura, perimetro, area;

    printf("Introduce las coordenadas del primer punto (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Introduce las coordenadas del segundo punto (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    base = fabs(x2 - x1);
    altura = fabs(y2 - y1);
    perimetro = 2 * (base + altura);
    area = base * altura;

    printf("Perímetro del rectángulo: %.2f\n", perimetro);
    printf("Área del rectángulo: %.2f\n", area);
}

void cuadroColor() {
    int tamano = 5; 
    for (int i = 0; i < tamano; i++) {
        for (int j = 0; j < tamano; j++) {
            printf("# ");
        }
        printf("\n");
    }
}

void ecuacionCuadraticaEstructura() {
    struct Ecuacion {
        float a, b, c;
    } eq;

    printf("Introduce el coeficiente a: ");
    scanf("%f", &eq.a);
    printf("Introduce el coeficiente b: ");
    scanf("%f", &eq.b);
    printf("Introduce el coeficiente c: ");
    scanf("%f", &eq.c);

    float discriminante = eq.b * eq.b - 4 * eq.a * eq.c;

    if (discriminante > 0) {
        float x1 = (-eq.b + sqrt(discriminante)) / (2 * eq.a);
        float x2 = (-eq.b - sqrt(discriminante)) / (2 * eq.a);
        printf("Las soluciones son reales y distintas: x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if (discriminante == 0) {
        float x = -eq.b / (2 * eq.a);
        printf("Las soluciones son reales e iguales: x = %.2f\n", x);
    } else {
        printf("Las soluciones son complejas.\n");
    }
}

void ecuacionCuadraticaScan() {
    float a, b, c;
    printf("Introduce los coeficientes a, b y c separados por espacio (ej: 1 -3 2): ");
    scanf("%f %f %f", &a, &b, &c);

    float discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        float x1 = (-b + sqrt(discriminante)) / (2 * a);
        float x2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Las soluciones son reales y distintas: x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if (discriminante == 0) {
        float x = -b / (2 * a);
        printf("Las soluciones son reales e iguales: x = %.2f\n", x);
    } else {
        printf("Las soluciones son complejas.\n");
    }
}

void ecuacionesSegundoGrado() {
    float a, b, c, discriminante, x1, x2;

    printf("Introduce el coeficiente a: ");
    scanf("%f", &a);
    printf("Introduce el coeficiente b: ");
    scanf("%f", &b);
    printf("Introduce el coeficiente c: ");
    scanf("%f", &c);

    discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Raíces reales y distintas: x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if (discriminante == 0) {
        x1 = -b / (2 * a);
        printf("Raíces reales e iguales: x = %.2f\n", x1);
    } else {
        printf("Raíces complejas. No se pueden calcular en este formato.\n");
    }
}

void estrellaBarco() {
    printf("   *   \n");
    printf("  ***  \n");
    printf(" ***** \n");
    printf("*******\n");
    printf("   |   \n");
    printf("  / \\  \n");
}

void estructuraDeclarativa() {
    struct Producto {
        int id;
        char nombre[50];
        float precio;
    };

    struct Producto p;
    printf("Introduce el ID del producto: ");
    scanf("%d", &p.id);
    printf("Introduce el nombre del producto: ");
    scanf("%s", p.nombre);
    printf("Introduce el precio del producto: ");
    scanf("%f", &p.precio);

    printf("\nInformación del Producto:\n");
    printf("ID: %d\n", p.id);
    printf("Nombre: %s\n", p.nombre);
    printf("Precio: %.2f\n", p.precio);
}

void estructuraEstudiante() {
    struct Estudiante {
        char nombre[50];
        int edad;
        float promedio;
    };

    struct Estudiante estudiante;

    printf("Introduce el nombre del estudiante: ");
    scanf("%s", estudiante.nombre);
    printf("Introduce la edad del estudiante: ");
    scanf("%d", &estudiante.edad);
    printf("Introduce el promedio del estudiante: ");
    scanf("%f", &estudiante.promedio);

    printf("\nInformación del Estudiante:\n");
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);
}

void estructuraImpresion() {
    struct Producto {
        int id;
        char nombre[50];
        float precio;
    };

    struct Producto producto = {1, "Manzana", 10.5};

    printf("\nInformación del Producto:\n");
    printf("ID: %d\n", producto.id);
    printf("Nombre: %s\n", producto.nombre);
    printf("Precio: %.2f\n", producto.precio);
}

void estructuraImpresionPerros() {
    struct Perro {
        char nombre[50];
        int edad;
        char raza[50];
    };

    struct Perro perro = {"Bobby", 3, "Golden Retriever"};

    printf("\nInformación del Perro:\n");
    printf("Nombre: %s\n", perro.nombre);
    printf("Edad: %d años\n", perro.edad);
    printf("Raza: %s\n", perro.raza);
}

void estructuraUnion() {
    union Dato {
        int entero;
        float decimal;
        char texto[20];
    };

    union Dato dato;

    printf("Introduce un número entero: ");
    scanf("%d", &dato.entero);
    printf("Dato almacenado como entero: %d\n", dato.entero);

    printf("Introduce un número decimal: ");
    scanf("%f", &dato.decimal);
    printf("Dato almacenado como decimal: %.2f\n", dato.decimal);

    printf("Introduce un texto: ");
    scanf("%s", dato.texto);
    printf("Dato almacenado como texto: %s\n", dato.texto);
}

void estructuraDobleAnidada() {
    struct Direccion {
        char calle[50];
        int numero;
        char ciudad[50];
    };

    struct Persona {
        char nombre[50];
        int edad;
        struct Direccion direccion;
    };

    struct Persona persona;

    printf("Introduce el nombre de la persona: ");
    scanf("%s", persona.nombre);
    printf("Introduce la edad de la persona: ");
    scanf("%d", &persona.edad);
    printf("Introduce la calle: ");
    scanf("%s", persona.direccion.calle);
    printf("Introduce el número: ");
    scanf("%d", &persona.direccion.numero);
    printf("Introduce la ciudad: ");
    scanf("%s", persona.direccion.ciudad);

    printf("\nInformación de la Persona:\n");
    printf("Nombre: %s\n", persona.nombre);
    printf("Edad: %d\n", persona.edad);
    printf("Dirección: %s, %d, %s\n", persona.direccion.calle, persona.direccion.numero, persona.direccion.ciudad);
}

void exponenciales() {
    double numero, resultado;

    printf("Introduce un número para calcular su exponencial: ");
    scanf("%lf", &numero);

    resultado = exp(numero);

    printf("La exponencial de %.2lf es %.2lf\n", numero, resultado);
}
int suma(int a, int b) {
    return a + b;
}


int resta(int a, int b) {
    return a - b;
}

void funciones() {
    printf("Suma de 5 y 3: %d\n", suma(5, 3)); 
    printf("Resta de 5 y 3: %d\n", resta(5, 3)); 
}

void gotoxy(int x, int y) {
    for (int i = 0; i < y; i++) {
        printf("\n");
    }
    for (int i = 0; i < x; i++) {
        printf(" ");
    }
}


void intervalosPares() {
    int inicio, fin;
    printf("Introduce el inicio del intervalo: ");
    scanf("%d", &inicio);
    printf("Introduce el fin del intervalo: ");
    scanf("%d", &fin);

    printf("Números pares en el intervalo [%d, %d]:\n", inicio, fin);
    for (int i = inicio; i <= fin; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}


void intervalosImpares() {
    int inicio, fin;
    printf("Introduce el inicio del intervalo: ");
    scanf("%d", &inicio);
    printf("Introduce el fin del intervalo: ");
    scanf("%d", &fin);

    printf("Números impares en el intervalo [%d, %d]:\n", inicio, fin);
    for (int i = inicio; i <= fin; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}


void matrizExponente() {
    int matriz[3][3];
    printf("Introduce los valores de la matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            matriz[i][j] *= matriz[i][j]; 
        }
    }

    printf("\nMatriz con cada elemento al cuadrado:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void matrizFuncion() {
    int matriz[2][2];
    printf("Introduce los valores de la matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            matriz[i][j] += 10; 
        }
    }

    printf("\nMatriz después de aplicar la modificación:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void matrizFuncion2() {
    int matriz[3][3];
    int factor;

    printf("Introduce el factor de multiplicación: ");
    scanf("%d", &factor);
    printf("Introduce los valores de la matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            matriz[i][j] *= factor; 
        }
    }

    printf("\nMatriz después de multiplicar por el factor:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void matrizmultimarco() {
    int matriz[3][3];
    printf("Introduce los valores de la matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz con marco decorativo:\n");
    printf("*****\n");
    for (int i = 0; i < 3; i++) {
        printf("* ");
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("*\n");
    }
    printf("*****\n");
}

void matrizmxm() {
    int M;
    printf("Introduce el tamaño de la matriz cuadrada (M x M): ");
    scanf("%d", &M);

    int matriz[M][M];
    printf("Introduce los valores de la matriz %dx%d:\n", M, M);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz %dx%d:\n", M, M);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void Menuunionmatriz() {
    int opcion;
    printf("\n--- Submenú de Operaciones con Matrices ---\n");
    printf("1. Sumar dos matrices\n");
    printf("2. Multiplicar dos matrices\n");
    printf("3. Salir del submenú\n");
    printf("Elige una opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Función de suma de matrices aún no implementada.\n");
            break;
        case 2:
            printf("Función de multiplicación de matrices aún no implementada.\n");
            break;
        case 3:
            printf("Saliendo del submenú.\n");
            break;
        default:
            printf("Opción inválida. Intenta de nuevo.\n");
    }
}

void multielementos() {
    int arreglo[5], producto = 1;
    printf("Introduce 5 números para calcular su producto:\n");
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &arreglo[i]);
        producto *= arreglo[i];
    }

    printf("El producto de los elementos es: %d\n", producto);
}
void multiplicacionestructura() {
    struct Numeros {
        int num1;
        int num2;
    };

    struct Numeros nums;
    printf("Introduce el primer número: ");
    scanf("%d", &nums.num1);
    printf("Introduce el segundo número: ");
    scanf("%d", &nums.num2);

    int producto = nums.num1 * nums.num2;
    printf("El producto de %d y %d es: %d\n", nums.num1, nums.num2, producto);
}

void multiplicacionmatrizvector() {
    int matriz[2][2], vector[2], resultado[2] = {0, 0};
    printf("Introduce los valores de la matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Introduce los valores del vector 2x1:\n");
    for (int i = 0; i < 2; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%d", &vector[i]);
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultado[i] += matriz[i][j] * vector[j];
        }
    }

    printf("\nResultado de la multiplicación (vector 2x1):\n");
    for (int i = 0; i < 2; i++) {
        printf("%d\n", resultado[i]);
    }
}

void positivonegativo() {
    int numero;
    printf("Introduce un número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("El número es positivo.\n");
    } else if (numero < 0) {
        printf("El número es negativo.\n");
    } else {
        printf("El número es cero.\n");
    }
}

void raizcuadrada() {
    double numero, resultado;

    printf("Introduce un número para calcular su raíz cuadrada: ");
    scanf("%lf", &numero);

    if (numero >= 0) {
        resultado = sqrt(numero);
        printf("La raíz cuadrada de %.2lf es %.2lf\n", numero, resultado);
    } else {
        printf("Error: No se puede calcular la raíz cuadrada de un número negativo.\n");
    }
}

void retornopalabras() {
    char palabra[50];
    printf("Introduce una palabra: ");
    scanf("%s", palabra);

    printf("La palabra ingresada es: %s\n", palabra);

    strcat(palabra, "_modificada");
    printf("La palabra modificada es: %s\n", palabra);
}

void sumaImpar() {
    int inicio, fin, suma = 0;
    printf("Introduce el inicio del intervalo: ");
    scanf("%d", &inicio);
    printf("Introduce el fin del intervalo: ");
    scanf("%d", &fin);

    for (int i = inicio; i <= fin; i++) {
        if (i % 2 != 0) {
            suma += i;
        }
    }

    printf("La suma de los números impares entre [%d, %d] es: %d\n", inicio, fin, suma);
}

void sumaPar() {
    int inicio, fin, suma = 0;
    printf("Introduce el inicio del intervalo: ");
    scanf("%d", &inicio);
    printf("Introduce el fin del intervalo: ");
    scanf("%d", &fin);

    for (int i = inicio; i <= fin; i++) {
        if (i % 2 == 0) {
            suma += i;
        }
    }

    printf("La suma de los números pares entre [%d, %d] es: %d\n", inicio, fin, suma);
}

void sumaMultiElementos() {
    int arreglo[10], suma = 0;
    printf("Introduce 10 números:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &arreglo[i]);
        suma += arreglo[i];
    }

    printf("La suma de los elementos es: %d\n", suma);
}

void tablaMultiplicar() {
    int numero;
    printf("Introduce un número para generar su tabla de multiplicar: ");
    scanf("%d", &numero);

    printf("Tabla de multiplicar del %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

void temperaturaConversion() {
    float fahrenheit, celsius;

    printf("Introduce la temperatura en Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("La temperatura en Celsius es: %.2f\n", celsius);
}
void vectorMayorMenor() {
    int vector[10], mayor, menor;

    printf("Introduce 10 números:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    mayor = menor = vector[0];
    for (int i = 1; i < 10; i++) {
        if (vector[i] > mayor) {
            mayor = vector[i];
        }
        if (vector[i] < menor) {
            menor = vector[i];
        }
    }

    printf("El valor mayor es: %d\n", mayor);
    printf("El valor menor es: %d\n", menor);
}

void promedioVector() {
    int vector[10], suma = 0;
    float promedio;

    printf("Introduce 10 números:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vector[i]);
        suma += vector[i];
    }

    promedio = suma / 10.0;
    printf("El promedio de los números es: %.2f\n", promedio);
}

void sumaDiagonalMatriz() {
    int matriz[3][3], suma = 0;

    printf("Introduce los valores de la matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (i == j) {
                suma += matriz[i][j];
            }
        }
    }

    printf("La suma de la diagonal principal es: %d\n", suma);
}

void valoresParesVector() {
    int vector[10];

    printf("Introduce 10 números:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    printf("Los valores pares son:\n");
    for (int i = 0; i < 10; i++) {
        if (vector[i] % 2 == 0) {
            printf("%d ", vector[i]);
        }
    }
    printf("\n");
}


void valoresImparesVector() {
    int vector[10];

    printf("Introduce 10 números:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    printf("Los valores impares son:\n");
    for (int i = 0; i < 10; i++) {
        if (vector[i] % 2 != 0) {
            printf("%d ", vector[i]);
        }
    }
    printf("\n");
}

void vectorMultiplicacion() {
    int vector[10], factor;

    printf("Introduce un número para multiplicar cada elemento del vector: ");
    scanf("%d", &factor);

    printf("Introduce 10 números para el vector:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vector[i]);
        vector[i] *= factor;  
    }

    printf("Vector modificado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
}

void busquedaValorVector() {
    int vector[10], valorBuscado, encontrado = 0;

    printf("Introduce 10 números para el vector:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    printf("Introduce el valor que deseas buscar: ");
    scanf("%d", &valorBuscado);

    for (int i = 0; i < 10; i++) {
        if (vector[i] == valorBuscado) {
            printf("Valor encontrado en la posición %d.\n", i);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("El valor no se encuentra en el vector.\n");
    }
}

void matrizOperaciones() {
    printf("Esta es la función matrizOperaciones.\n");
}

void sumaApuntadores(int *a, int *b) {
    int suma = *a + *b;
    printf("La suma de los valores es: %d\n", suma);
}

void gotoxyleer() {
    int x, y;
    char dato[50];
    printf("Introduce las coordenadas (x, y) para posicionar el cursor: ");
    scanf("%d %d", &x, &y);
    gotoxy(x, y);
    printf("Introduce un texto: ");
    scanf("%s", dato);
    printf("\nEl texto ingresado en la posición (%d, %d) es: %s\n", x, y, dato);
}

