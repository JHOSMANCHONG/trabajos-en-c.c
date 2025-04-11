#include <stdio.h>

// Función para convertir divisas
float convertirDivisa(char moneda[], float cantidad, float precio) {
    return cantidad * precio; // Calcula el total
}

int main() {
    char moneda[10]; // Nombre de la moneda (USD, MXN, etc.)
    float cantidad, precio, total;

    // Solicitar los datos al usuario
    printf("Introduce la moneda (ejemplo: USD): ");
    scanf("%s", moneda); // Leer el nombre de la moneda

    printf("Introduce la cantidad: ");
    scanf("%f", &cantidad); // Leer la cantidad

    printf("Introduce el precio por unidad: ");
    scanf("%f", &precio); // Leer el precio por unidad

    // Calcular la conversión
    total = convertirDivisa(moneda, cantidad, precio);

    // Mostrar el resultado
    printf("%.2f %s a un precio de %.2f por unidad equivalen a: %.2f\n", cantidad, moneda, precio, total);

    return 0;
}
