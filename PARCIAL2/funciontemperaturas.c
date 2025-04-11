#include <stdio.h>

// Función para convertir Celsius a Fahrenheit
float convertirCelsiusAFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}


float convertirFahrenheitACelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}


float convertirKelvinAFahrenheit(float kelvin) {
    return ((kelvin - 273.15) * 9 / 5) + 32;
}


float convertirCelsiusAKelvin(float celsius) {
    return celsius + 273.15;
}

int main() {
    int opcion;
    float valor, resultado;

    printf("Selecciona una opción de conversión:\n");
    printf("1. Celsius a Fahrenheit\n");
    printf("2. Fahrenheit a Celsius\n");
    printf("3. Kelvin a Fahrenheit\n");
    printf("4. Celsius a Kelvin\n");
    printf("Introduce tu opción (1-4): ");
    scanf("%d", &opcion);

    printf("Introduce el valor a convertir: ");
    scanf("%f", &valor);

    switch (opcion) {
        case 1:
            resultado = convertirCelsiusAFahrenheit(valor);
            printf("%.2f °C equivalen a %.2f °F\n", valor, resultado);
            break;
        case 2:
            resultado = convertirFahrenheitACelsius(valor);
            printf("%.2f °F equivalen a %.2f °C\n", valor, resultado);
            break;
        case 3:
            resultado = convertirKelvinAFahrenheit(valor);
            printf("%.2f K equivalen a %.2f °F\n", valor, resultado);
            break;
        case 4:
            resultado = convertirCelsiusAKelvin(valor);
            printf("%.2f °C equivalen a %.2f K\n", valor, resultado);
            break;
        default:
            printf("Opción inválida. Por favor, selecciona entre 1 y 4.\n");
    }

    return 0;
}
