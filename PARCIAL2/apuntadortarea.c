#include <stdio.h> // Librería estándar de entrada y salida.

int main() {
    // Declaración de las variables para los números y resultados.
    float num1, num2, suma, resta, multiplicacion, division;

    // Declaración de punteros que apuntan a las direcciones de las variables.
    float *p_num1 = &num1, *p_num2 = &num2;
    float *p_suma = &suma, *p_resta = &resta, *p_multiplicacion = &multiplicacion, *p_division = &division;

    // Solicitud de los valores iniciales al usuario.
    printf("Introduce el primer número: ");
    scanf("%f", p_num1); // Almacena el primer número en la dirección de num1.
    printf("Introduce el segundo número: ");
    scanf("%f", p_num2); // Almacena el segundo número en la dirección de num2.

    // Realización de las operaciones básicas.
    *p_suma = *p_num1 + *p_num2;             // Suma: se calcula usando los valores apuntados por p_num1 y p_num2.
    *p_resta = *p_num1 - *p_num2;            // Resta: operación entre los valores apuntados por p_num1 y p_num2.
    *p_multiplicacion = *p_num1 * *p_num2;   // Multiplicación: producto de los valores.
    *p_division = *p_num1 / *p_num2;         // División: se realiza sin validar si el divisor es cero.

    // Impresión de resultados y las posiciones de memoria.
    printf("\nResultados y posiciones de memoria:\n");
    printf("Num1: %.2f (Posición: %p)\n", *p_num1, (void*)p_num1); // Muestra el valor y la dirección de num1.
    printf("Num2: %.2f (Posición: %p)\n", *p_num2, (void*)p_num2); // Muestra el valor y la dirección de num2.
    printf("Suma: %.2f (Posición: %p)\n", *p_suma, (void*)p_suma); // Resultado de la suma y su dirección de memoria.
    printf("Resta: %.2f (Posición: %p)\n", *p_resta, (void*)p_resta); // Resultado de la resta y su dirección de memoria.
    printf("Multiplicación: %.2f (Posición: %p)\n", *p_multiplicacion, (void*)p_multiplicacion); // Multiplicación y posición de memoria.
    printf("División: %.2f (Posición: %p)\n", *p_division, (void*)p_division); // División y posición.

    return 0; // Indicador de finalización exitosa del programa.
}
