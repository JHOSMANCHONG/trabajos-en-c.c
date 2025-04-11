#include <stdio.h>
#include <math.h>

union Resultados {
    int area;       
    float volumen;  
};

int areaCuadrado(int lado) {
    return lado * lado;
}

int areaRectangulo(int base, int altura) {
    return base * altura;
}

float areaCirculo(float radio) {
    return 3.14 * radio * radio;
}

float areaTriangulo(float base, float altura) {
    return 0.5 * base * altura;
}

float areaTrapecio(float baseMayor, float baseMenor, float altura) {
    return ((baseMayor + baseMenor) / 2) * altura;
}

float volumenEsfera(float radio) {
    return (4.0 / 3.0) * 3.14 * pow(radio, 3);
}

int volumenCubo(int lado) {
    return lado * lado * lado;
}

float volumenCilindro(float radio, float altura) {
    return 3.14 * pow(radio, 2) * altura;
}

float volumenCono(float radio, float altura) {
    return (1.0 / 3.0) * 3.14 * pow(radio, 2) * altura;
}

float volumenPiramide(float base, float altura) {
    return (1.0 / 3.0) * base * altura;
}

int main() {
    int opcion;
    int lado, baseEntero, alturaEntero; 
    float base, altura, radio, baseMayor, baseMenor; 
    union Resultados resultado; 

    printf("Seleccione una figura:\n");
    printf("1. Círculo (Área)\n");
    printf("2. Cuadrado (Área)\n");
    printf("3. Rectángulo (Área)\n");
    printf("4. Triángulo (Área)\n");
    printf("5. Trapecio (Área)\n");
    printf("6. Esfera (Volumen)\n");
    printf("7. Cubo (Volumen)\n");
    printf("8. Cilindro (Volumen)\n");
    printf("9. Cono (Volumen)\n");
    printf("10. Pirámide (Volumen)\n");

    printf("\nIngrese una opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1: 
            printf("Ingrese el radio del círculo: ");
            scanf("%f", &radio);
            resultado.volumen = areaCirculo(radio); 
            printf("Área del círculo: %.2f\n", resultado.volumen);
            break;

        case 2: 
            printf("Ingrese el lado del cuadrado: ");
            scanf("%d", &lado);
            resultado.area = areaCuadrado(lado); 
            printf("Área del cuadrado: %d\n", resultado.area);
            break;

        case 3: 
            printf("Ingrese la base y la altura del rectángulo: ");
            scanf("%d %d", &baseEntero, &alturaEntero); 
            resultado.area = areaRectangulo(baseEntero, alturaEntero); 
            printf("Área del rectángulo: %d\n", resultado.area);
            break;

        case 4: 
            printf("Ingrese la base y la altura del triángulo: ");
            scanf("%f %f", &base, &altura); 
            resultado.volumen = areaTriangulo(base, altura); 
            printf("Área del triángulo: %.2f\n", resultado.volumen);
            break;

        case 5: 
            printf("Ingrese la base mayor, la base menor y la altura del trapecio: ");
            scanf("%f %f %f", &baseMayor, &baseMenor, &altura); 
            resultado.volumen = areaTrapecio(baseMayor, baseMenor, altura); 
            printf("Área del trapecio: %.2f\n", resultado.volumen);
            break;

        case 6: 
            printf("Ingrese el radio de la esfera: ");
            scanf("%f", &radio);
            resultado.volumen = volumenEsfera(radio); 
            printf("Volumen de la esfera: %.2f\n", resultado.volumen);
            break;

        case 7: 
            printf("Ingrese el lado del cubo: ");
            scanf("%d", &lado); 
            resultado.area = volumenCubo(lado); 
            printf("Volumen del cubo: %d\n", resultado.area);
            break;

        case 8: 
            printf("Ingrese el radio y la altura del cilindro: ");
            scanf("%f %f", &radio, &altura); 
            resultado.volumen = volumenCilindro(radio, altura); 
            printf("Volumen del cilindro: %.2f\n", resultado.volumen);
            break;

        case 9: 
            printf("Ingrese el radio y la altura del cono: ");
            scanf("%f %f", &radio, &altura); 
            resultado.volumen = volumenCono(radio, altura); 
            printf("Volumen del cono: %.2f\n", resultado.volumen);
            break;

        case 10: 
            printf("Ingrese el área de la base y la altura de la pirámide: ");
            scanf("%f %f", &base, &altura); 
            resultado.volumen = volumenPiramide(base, altura); 
            printf("Volumen de la pirámide: %.2f\n", resultado.volumen);
            break;

        default:
            printf("Opción no válida.\n");
    }

    return 0;
}
