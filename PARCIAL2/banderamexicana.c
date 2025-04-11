#include <stdio.h>

int main() {
    int ancho = 60; 
    int alto = 20;  
    int tercio_ancho = ancho / 3;
    int mitad_alto = alto / 2;

    for (int i = 0; i < alto; i++) {
        for (int j = 0; j < ancho; j++) {
            if (j < tercio_ancho) {
                printf("\033[42m \033[0m"); 
            } else if (j < 2 * tercio_ancho) {
                if (i == mitad_alto && j == ancho / 2) {
                    printf("\033[48;5;52m \033[0m"); 
                } else {
                    printf("\033[47m \033[0m"); 
                }
            } else {
                printf("\033[41m \033[0m"); 
            }
        }
        printf("\n");
    }

    return 0;
}