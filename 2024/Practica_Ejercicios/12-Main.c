#include <stdio.h>

int main (void){
    int anios;
    printf("Ingrese cuantos anios tenes: ");
    scanf("%d", &anios);
    printf("En total, viviste: %d dias", anios*365);
    return 0;
}