#include <stdio.h>

int main(void){
    float temperatura;
    printf("Ingrese la temperatura en grados celsius: ");
    scanf("%f",&temperatura);
    printf("La temperatura expresada en Fahrenheit es: %.2f", temperatura*1.8+32);
    return 0;
}