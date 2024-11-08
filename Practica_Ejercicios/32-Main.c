#include <stdio.h>

int main(void){
    int num;
    printf("Ingrese su numero: ");
    scanf("%d", &num);
    if(num%2==0)printf("El numero es par.");
    else printf("El numero es impar.");
    return 0;
}