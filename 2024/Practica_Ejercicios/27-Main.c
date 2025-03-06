#include <stdio.h>

int main(void){
    int numeroin;
    printf("Ingrese el numero de tres cifras: ");
    scanf("%d", &numeroin);
    printf("Sus cifras son: %d %d %d", numeroin/100, (numeroin % 100 / 10), numeroin % 10);
    return 0;
}