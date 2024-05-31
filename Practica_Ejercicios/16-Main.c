#include <stdio.h>
#include <math.h>

int main(void){
    float area;
    printf("Ingrese el valor del area (en m^2): ");
    scanf("%f", &area);
    printf("El perimetro de este cuadrado es de %f", sqrt(area));
    return 0;
}