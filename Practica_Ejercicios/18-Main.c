#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.H>

int main(void){
    float radioc;
    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radioc);
    printf("El valor de area a partir del radio es: %.2f", M_PI*(pow(radioc,2)));
    return 0;
}