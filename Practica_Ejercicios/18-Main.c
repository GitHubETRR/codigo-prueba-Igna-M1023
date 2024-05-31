#include <stdio.h>
#include <math.h>

int main(void){
    int radioc;
    printf("Ingrese el radio del circulo: ");
    scanf("%d", &radioc);
    printf("El valor de area a partir del radio es: %f", M_PI*(pow(radioc,2)));
    return 0;
}