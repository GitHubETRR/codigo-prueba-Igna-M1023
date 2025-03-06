#include <stdio.h>

int main (void){
    float centimetros;
    int pies;
    int pulgadas;
    printf("Ingrese los centimetros: ");
    scanf("%f", &centimetros);
    pies=centimetros/30.48;
    pulgadas=centimetros/2.54;
    printf("Valor en pies: %d\n", pies);
    printf("Valor en pulgadas: %d", pulgadas);
    return 0;
}