#include <stdio.h>

int main(void){
    int numeroin;
    printf("Ingrese el numero entero: ");
    scanf("%d", &numeroin);
    printf("Su ultima cifra es: %d", numeroin % 10);
    return 0;
}