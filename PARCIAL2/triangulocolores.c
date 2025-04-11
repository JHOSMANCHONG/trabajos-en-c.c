#include <stdio.h>

int main() {
    int altura = 10; 
    int i, j, k;

    for (i = 1; i <= altura; i++) {

        for (j = 1; j <= altura - i; j++) {
            printf(" ");
        }

        for (k = 1; k <= 2 * i - 1; k++) {
            printf("\033[42m*\033[0m"); 
        }

        printf("\n");
    }

    return 0;
}