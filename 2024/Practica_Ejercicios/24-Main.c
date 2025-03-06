#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main(void){
    float radio,altura;
    printf("Ingrese el radio: ");
    scanf("%f", &radio);
    printf("Ingrese el altura: ");
    scanf("%f", &altura);
    printf("El area del cilindro es de %.2f", 2*M_PI*radio*(radio+altura));
    printf("\nEl volumen de este es de %.2f",  M_PI*(pow(radio,2))*altura);
    return 0;
}