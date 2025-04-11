#include <stdio.h>

int main() {
    int ancho = 80; 
    int alto = 25; 
    int alto_franja = alto / 13; 
    int ancho_cuadrante = ancho * 2 / 5; 
    int alto_cuadrante = alto * 7 / 13; 

    for (int i = 0; i < alto; i++) {
        for (int j = 0; j < ancho; j++) {

            if (j < ancho_cuadrante && i < alto_cuadrante) {
                printf("\033[44m \033[0m"); 
            } else {

                if ((i / alto_franja) % 2 == 0) {
                    printf("\033[41m \033[0m"); 
                } else {
                    printf("\033[47m \033[0m"); 
                }
            }
        }
        printf("\n");
    }
    return 0;
}