#include <stdio.h>

int main(void){
    float numb1,numb2;
    char oper;
    printf("Ingrese los 2 numeros para realizar las operaciones: ");
    scanf("\n %f %f", &numb1, &numb2);
    printf("Ingrese la operacion (S-Suma, R-Resta, M-Multiplicacion, D-Division): ");
    scanf(" %c", &oper);
    printf("%c", oper);
    if(oper==83)printf("La suma de estos numeros es de %.02f", numb1+numb2);
    if(oper==82)
    return 0;
}