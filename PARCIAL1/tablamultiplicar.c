#include <stdio.h>

int main()
{
    int tabla = 0;
    while (tabla <= 10)
    {
        int numero = 0;
        while (numero<=10)
        {
            int mult  = numero*tabla;
            printf("%s%d%s%d%s%d\n","(",tabla,") (",numero,")=",mult);
            numero ++;
        }
        tabla++;
        
    }
    
}