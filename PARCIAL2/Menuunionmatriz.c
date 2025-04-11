#include <stdio.h>
#include <string.h>

#define FILAS 2
#define COLUMNAS 2

typedef struct {
    char nombre[50];
    int edad;
} Persona;

typedef struct {
    char producto[50];
    float precio;
} Producto;

typedef union {
    Persona persona;
    Producto producto;
} Dato;

typedef struct {
    Dato Valor;
    int tipo;
} Celda;

int main() {
    Celda matriz[FILAS][COLUMNAS];
    char buffer[100]; 

    printf("Ingrese los datos para la matriz:\n");

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Celda [%d][%d]:\n", i, j);


            printf("Ingrese el tipo (1 para Persona, 2 para Producto): ");
            fgets(buffer, sizeof(buffer), stdin); 
            sscanf(buffer, "%d", &matriz[i][j].tipo); 

            switch (matriz[i][j].tipo) {
                case 1:
                    printf("Ingrese el nombre de la persona: ");
                    fgets(matriz[i][j].Valor.persona.nombre, sizeof(matriz[i][j].Valor.persona.nombre), stdin);
                    matriz[i][j].Valor.persona.nombre[strcspn(matriz[i][j].Valor.persona.nombre, "\n")] = '\0'; // Eliminar salto de línea
                    printf("Ingrese la edad de la persona: ");
                    fgets(buffer, sizeof(buffer), stdin);
                    sscanf(buffer, "%d", &matriz[i][j].Valor.persona.edad);
                    break;

                case 2:
                    printf("Ingrese el nombre del producto: ");
                    fgets(matriz[i][j].Valor.producto.producto, sizeof(matriz[i][j].Valor.producto.producto), stdin);
                    matriz[i][j].Valor.producto.producto[strcspn(matriz[i][j].Valor.producto.producto, "\n")] = '\0'; // Eliminar salto de línea
                    printf("Ingrese el precio del producto: ");
                    fgets(buffer, sizeof(buffer), stdin);
                    sscanf(buffer, "%f", &matriz[i][j].Valor.producto.precio);
                    break;

                default:
                    printf("Tipo no válido, intente nuevamente.\n");
                    j--; 
                    break;
            }
        }
    }

    
    printf("\nRecorriendo la matriz:\n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Celda [%d][%d]: ", i, j);
            switch (matriz[i][j].tipo) {
                case 1:
                    printf("Persona - Nombre: %s, Edad: %d\n",
                           matriz[i][j].Valor.persona.nombre,
                           matriz[i][j].Valor.persona.edad);
                    break;

                case 2:
                    printf("Producto - Nombre: %s, Precio: %.2f\n",
                           matriz[i][j].Valor.producto.producto,
                           matriz[i][j].Valor.producto.precio);
                    break;

                default:
                    printf("Datos inválidos.\n");
                    break;
            }
        }
    }

    return 0;
}
