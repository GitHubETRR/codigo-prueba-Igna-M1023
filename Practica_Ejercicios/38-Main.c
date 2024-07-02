#include <stdio.h>
#include <stdlib.h>

int main(void){
    float numb1,numb2;
    char oper;
    printf("Ingrese los 2 numeros para realizar las operaciones: ");
    scanf("\n %f %f", &numb1, &numb2);
    printf("Ingrese la operacion (S-Suma, R-Resta, M-Multiplicacion, D-Division): ");
    scanf(" %c", &oper);
    if(oper=='S')printf("La suma de estos numeros es de %.02f", numb1+numb2);
    if(oper=='R')printf("La resta de estos 2 numeros es %.02f", numb1-numb2);
    if(oper=='M')printf("La multiplicacion de estos da %.02f", numb1*numb2);
    if(oper=='D'){
        if(numb1==0 || numb2==0){
            printf("Uno de los numeros ingresados es 0, no se puede realizar esta operacion.");
            return;
        }
        printf("La division da como resultado %.02f", numb1/numb2);
    }
    return 0;
}
