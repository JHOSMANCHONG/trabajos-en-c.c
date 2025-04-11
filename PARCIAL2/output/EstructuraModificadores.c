#include <stdio.h>
struct Direccion {
    char calle [50];
    int numero;
};

struct Persona{
    char nombre [50];
    struct Direccion domicilio;
};
int main(){
    struct Persona personal= {"carlos Ramirez", { "Av. Reforma", 123}};
    printf ("nombre: %s\n", personal.nombre);
    printf("domicilio: %s #%d\n", personal.domicilio.calle, personal.domicilio.numero);
    return 0;
}
