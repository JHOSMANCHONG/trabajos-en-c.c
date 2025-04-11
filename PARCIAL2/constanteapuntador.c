#include <stdio.h>
int main (){
    int a, b ,c, d, e;
    printf("Ingrese valor A\n");
    scanf("%d",&a);
    printf("Ingrese valor B\n");
    scanf("%d",&d);
    printf("Ingrese valor C\n");
    scanf("%d",&c);
    printf("Ingrese valor D\n");
    scanf("%d",&d);
    printf("Ingrese valor E\n");
    scanf("%d",&e);
    
    int *const pa = &a;
    int *const pb = &b;
    int *const pc = &c;
    int *const pd = &d;
    int *const pe = &e;
     
    printf("Valores ingresado: A=%p\n", &pa);
    printf("Valores ingresado: B=%p\n", &pb);
    printf("Valores ingresado: C=%p\n", &pc);
    printf("Valores ingresado: D=%p\n", &pd);
    printf("Valores ingresado: E=%p\n", &pe);

    int suma = *pa + *pa;
    printf("Resultado de la suma: %d\n", suma);

    *pa = suma;
    printf("Valor nuevo: A=%d\n", *pa);

    int resta = *pb + *pb;
    printf("Resultado de la resta: %d\n", resta);

    *pb = resta;
    printf("Valor nuevo: B=%d\n", *pb);

    int multiplicacion = *pc + *pc;
    printf("Resultado de la multiplicacion: %d\n", multiplicacion);

    *pc = multiplicacion;
    printf("Valor nuevo: C=%d\n", *pc);

    int division = *pd + *pd;
    printf("Resultado de la division: %d\n", division);

    *pd = division;
    printf("Valor nuevo: D=%d\n", *pd);

    return 0;


}