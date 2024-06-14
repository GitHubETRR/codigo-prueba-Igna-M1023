#include <stdio.h>

int main(void){
    int prval,seval;
    printf("Ingrese el primer valor y luego el segundo: ");
    scanf("%d %d", &prval, &seval);
    if((prval+seval)%2 == 0)printf("La suma de estos da un numero par.");
    else printf("La suma de estos no da un numero par.");
    return 0;
}

