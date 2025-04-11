#include <stdio.h>
struct Raza
{
    char nombre_raza[50];
    char pais_origen[50];
};

struct Perro
{
    char nombre[50];
    int edad;
    float peso;
    float altura;
    char color_pelaje[30];
    char sexo[10];
    char vacunado[3]; 
    char temperamento[15];
    char actividad[20];
    char entorno[20];
    struct Raza raza_info;
};

int main()
{
    int n;
    printf("Ingrese la cantidad de perros que desea registrar: ");
    scanf("%d", &n);
    getchar();

    struct Perro perros[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nIngrese los datos del perro %d:\n", i + 1);
        printf("Nombre: ");
        scanf("%s", perros[i].nombre);
        printf("Edad: ");
        scanf("%d", &perros[i].edad);
        printf("Peso: ");
        scanf("%f", &perros[i].peso);
        printf("Altura: ");
        scanf("%f", &perros[i].altura);
        printf("Color del pelaje: ");
        scanf("%s", perros[i].color_pelaje);
        printf("Sexo (Macho o Hembra): ");
        scanf("%s", perros[i].sexo);
        printf("Vacunado (Sí o No): ");
        scanf("%s", perros[i].vacunado);
        printf("Temperamento: ");
        scanf("%s", perros[i].temperamento);
        printf("Nivel de actividad: ");
        scanf("%s", perros[i].actividad);
        printf("Entorno preferido: ");
        scanf("%s", perros[i].entorno);
        printf("Nombre de la raza: ");
        scanf("%s", perros[i].raza_info.nombre_raza);
        printf("País de origen: ");
        scanf("%s", perros[i].raza_info.pais_origen);
    }

    printf("\n%-15s | %-5s | %-8s | %-8s | %-15s | %-8s | %-10s | %-15s | %-15s | %-15s | %-15s | %-15s\n",
           "Nombre", "Edad", "Peso", "Altura", "Color Pelaje", "Sexo", "Vacunado", "Temperamento", "Actividad", "Entorno", "Raza", "País Origen");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        printf("%-15s | %-5d | %-8.2f | %-8.2f | %-15s | %-8s | %-10s | %-15s | %-15s | %-15s | %-15s | %-15s\n",
               perros[i].nombre,
               perros[i].edad,
               perros[i].peso,
               perros[i].altura,
               perros[i].color_pelaje,
               perros[i].sexo,
               perros[i].vacunado,
               perros[i].temperamento,
               perros[i].actividad,
               perros[i].entorno,
               perros[i].raza_info.nombre_raza,
               perros[i].raza_info.pais_origen);
    }

    return 0;
}
