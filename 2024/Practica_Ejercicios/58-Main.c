#include <stdio.h>
#include <math.h>

int potencia(int,int);

int main(void){
    int entero,potenx,resultado;
    printf("Ingrese el entero a hacerle la potencia: ");
    scanf("%d", &entero);
    printf("Ingrese el valor de la potencia: ");
    scanf("%d", &potenx);
    resultado = potencia(entero, potenx);
    printf("El resultado de la potencia da: %d", resultado);
    return 0;
}

int potencia(int entf, int potf){
    int res;
    res = pow(entf, potf);
    return res;
}
