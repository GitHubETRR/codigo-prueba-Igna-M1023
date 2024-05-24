#include <stdio.h> 

int main(void){
    int preciokg;
    float cantidadkg;
    printf("Ingrese el valor del kg del producto: ");
    scanf("%d", &preciokg);
    printf("Ingrese la cantidad de mercancia comprada (en kg): ");
    scanf("%f", &cantidadkg);
    printf("El valor a pagar es: %.0f", preciokg*cantidadkg);
}