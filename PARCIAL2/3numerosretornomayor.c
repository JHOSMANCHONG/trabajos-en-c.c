#include <stdio.h>

int encontrarMayorDeTres(int num1, int num2, int num3) {
    int mayor = num1; 

    if (num2 > mayor) {
        mayor = num2; 
    }
    if (num3 > mayor) {
        mayor = num3; 
    }

    return mayor;
}

int main() {
    int numero1, numero2, numero3;

    printf("Introduce el primer número: ");
    scanf("%d", &numero1);

    printf("Introduce el segundo número: ");
    scanf("%d", &numero2);

    printf("Introduce el tercer número: ");
    scanf("%d", &numero3);

    int mayor = encontrarMayorDeTres(numero1, numero2, numero3);
    printf("El mayor entre %d, %d y %d es: %d\n", numero1, numero2, numero3, mayor);

    return 0;
}
