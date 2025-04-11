#include <stdio.h>

int sumarRango(int menor, int mayor) {
    int suma = 0;

    for (int i = menor + 1; i <= mayor; i++) { 
        suma += i;
    }

    return suma;
}

int main() {
    int menor, mayor;

    printf("Introduce el número menor: ");
    scanf("%d", &menor);

    printf("Introduce el número mayor: ");
    scanf("%d", &mayor);

    if (mayor > menor) {
        int suma = sumarRango(menor, mayor);
        printf("La suma de los números entre %d y %d (sin incluir %d pero sí %d) es: %d\n", menor, mayor, menor, mayor, suma);
    } else {
        printf("Error: El número mayor debe ser mayor que el número menor.\n");
    }

    return 0;
}
