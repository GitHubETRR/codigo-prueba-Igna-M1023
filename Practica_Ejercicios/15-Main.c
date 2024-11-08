#include <stdio.h>

int main(void){
    int prlado, selado;
    printf("Ingrese un lado del rectangulo: ");
    scanf("%d", &prlado);
    printf("Ingrese el otro lado del rectangulo: ");
    scanf("%d", &selado);
    int suprec = prlado*selado;
    int perrec = ((selado*2)+(prlado*2));
    printf("El area de este rectangulo es de %d, mientras que el perimetro es %d", suprec, perrec);
    return 0;
}