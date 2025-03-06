#include <stdio.h>

int main(void){
    int num,factor;
    unsigned int factorial=1;
    printf("Ingrese un numero igual o mayor a 0: 5");
    scanf("%d", &num);
    if(num>=0){
        for(factor=num;factor>1;factor--){
            factorial = factorial * factor;
        }
        printf("El resultado de la factorial del numero es %d", factorial);
    }
    else printf("El numero ingresado es menor a 0");

    return 0;
}