#include <stdio.h>
#include <math.h>

int main(void){
    int potencias;
    printf("Las primeras 20 potencias de 2: ");
    for(potencias=1;potencias<21;potencias++){
        printf("Potencia de 2^%d es %d\n", potencias, (int)pow(2,potencias));
    }
    return 0;
}