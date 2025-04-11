#include <stdio.h>
#include <math.h>

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

int main() {
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
                printf("Volumen de la esfera: %.2f\n", (4.0/3.0) * M_PI * pow(radio, 3));
                break;
            case 2:
                printf("Introduce el radio de la base del cono: ");
                scanf("%f", &radio);
                printf("Introduce la altura del cono: ");
                scanf("%f", &altura);
                printf("Volumen del cono: %.2f\n", (1.0/3.0) * M_PI * pow(radio, 2) * altura);
                break;
            case 3:
                printf("Introduce el radio de la base del cilindro: ");
                scanf("%f", &radio);
                printf("Introduce la altura del cilindro: ");
                scanf("%f", &altura);
                printf("Volumen del cilindro: %.2f\n", M_PI * pow(radio, 2) * altura);
                break;
            case 0:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida. Intenta de nuevo.\n");
                break;
        }
    } while (opcion != 0);
    
    return 0;
}
