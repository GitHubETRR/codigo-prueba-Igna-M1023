#include <stdio.h>

int main(void){
    float prlado,selado,area;
    printf("Ingrese el primer lado del triangulo y luego el segundo lado: ");
    scanf("%f %f", &prlado, &selado);
    area = prlado*selado/2;
    printf("El area del triangulo es: %f", area);
    return 0;
}