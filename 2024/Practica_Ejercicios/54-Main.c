#include <stdio.h>

int main(void){
    int num1,num2,factor;
    printf("Ingrese 2 numeros, siendo el primer numero ingresado menor que el segundo: ");
    scanf("%d %d", &num1, &num2);
    if(num1<num2){
        printf("Los numeros enteros entre el primer y segundo valor son: \n");
        for(factor=num1;factor<num2;factor++){
            printf("%d\n", factor);
        }
    }
    else printf("El primer numero es mayor al segundo!");
    return 0;
}