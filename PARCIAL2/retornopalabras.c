#include <stdio.h>

// Función para retornar palabras según el número ingresado
const char* obtenerPalabra(int numero) {
    switch (numero) {
        case 1:
            return "hola";
        case 2:
            return "saludos";
        case 3:
            return "buenos días";
        case 4:
            return "bienvenido";
        default:
            return "número no reconocido";
    }
}

int main() {
    int numero;

    printf("Introduce un número: ");
    scanf("%d", &numero);

    // Llamar a la función y mostrar la palabra correspondiente
    printf("La palabra asociada es: %s\n", obtenerPalabra(numero));

    return 0;
}
