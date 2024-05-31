#include <stdio.h>
#include <math.h>

int main(void){
    float prcateto, secateto, hipo;
    printf("Ingrese la longitud del primer cateto: ");
    scanf("%f", &prcateto);
    printf("Ingrese la longitud del segundo cateto: ");
    scanf("%f", &secateto);
    hipo = sqrt(pow(prcateto,2)+pow(secateto,2));
    printf("La medida de la hipotenusa es %.2f", hipo);
    return 0;
}