#include <stdio.h>
struct Carro
{
    char modelo[50];
    char marca[50];
    int id;
    float precio;
    int año;
    float peso;
    int stock;
    char tipo_motor[50];
};

int main()
{
    int size = 2; 
    struct Carro arreglo[size];

    for (int i = 0; i < size; i++)
    {
        printf("\nIngrese los datos del carro %d:\n", i + 1);
        printf("Modelo: ");
        scanf("%s", arreglo[i].modelo);

        printf("Marca: ");
        scanf("%s", arreglo[i].marca);

        printf("ID: ");
        scanf("%d", &arreglo[i].id);

        printf("Precio: ");
        scanf("%f", &arreglo[i].precio);

        printf("Año: ");
        scanf("%d", &arreglo[i].año);

        printf("Peso: ");
        scanf("%f", &arreglo[i].peso);

        printf("Stock: ");
        scanf("%d", &arreglo[i].stock);

        printf("Tipo de motor: ");
        scanf("%s", arreglo[i].tipo_motor);
    }

    printf("\nValores ingresados:\n");
    for (int i = 0; i < size; i++)
    {
        printf("\nCarro %d:\n", i + 1);
        printf("Modelo: %s\n", arreglo[i].modelo);
        printf("Marca: %s\n", arreglo[i].marca);
        printf("ID: %d\n", arreglo[i].id);
        printf("Precio: %.2f\n", arreglo[i].precio);
        printf("Año: %d\n", arreglo[i].año);
        printf("Peso: %.2f kg\n", arreglo[i].peso);
        printf("Stock: %d unidades\n", arreglo[i].stock);
        printf("Tipo de motor: %s\n", arreglo[i].tipo_motor);
    }

    return 0;
}


