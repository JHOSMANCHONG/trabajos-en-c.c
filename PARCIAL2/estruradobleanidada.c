#include <stdio.h>

struct Coordenadas {
    int latitud;
    int longitud;
};

struct Direccion {
    char ciudad[30];
    struct Coordenadas coordenadas;
};

struct Estudiante {
    char nombre[50];
    struct Direccion direccion;
};

int main() {
    int cantidad, i;

    printf("¿Cuántos estudiantes deseas ingresar?: ");
    scanf("%d", &cantidad);

    struct Estudiante estudiantes[cantidad]; 

    for (i = 0; i < cantidad; i++) {
        printf("\nIngresando datos para el estudiante [%d]:\n", i);

        printf("Nombre: ");
        scanf("%s", estudiantes[i].nombre);

        printf("Ciudad: ");
        scanf("%s", estudiantes[i].direccion.ciudad);

        printf("Latitud: ");
        scanf("%d", &estudiantes[i].direccion.coordenadas.latitud);

        printf("Longitud: ");
        scanf("%d", &estudiantes[i].direccion.coordenadas.longitud);
    }

    printf("\n===== Datos de los Estudiantes =====\n");

    for (i = 0; i < cantidad; i++) {
        printf("Estudiantes[%d]:\n", i);
        printf("  Nombre      : %s\n", estudiantes[i].nombre);
        printf("  Ciudad      : %s\n", estudiantes[i].direccion.ciudad);
        printf("  Latitud     : %d\n", estudiantes[i].direccion.coordenadas.latitud);
        printf("  Longitud    : %d\n", estudiantes[i].direccion.coordenadas.longitud);
    }

    return 0;
}
