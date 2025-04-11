/**
 * programa que se encarga de crear 
 * un arreglo a partir del tamaño indicado
 * 
 */
#include <stdio.h>

int main(){
    int size;
    printf("ingre el tamaño del arreglo");
    scanf("%d", &size);
    
    int arregloNumeros [size];

    for(int i= 0; i<size; i++){
        printf("Ingrese el valor en posicion [%d]: \n",i);
        int swap;
        scanf("%d", &swap);
        arregloNumeros[i] = swap;
    }
    return 0;
    //imprimiendo los valores de arreglo
    for(int i=0; i< size; i++){
        printf("arreglo[%d] = %d\n", i, arregloNumeros[i]);
    }
}
