#include <stdio.h>

int main(void){
    int prnum, senum;
    printf("Ingrese el primer numero y luego el segundo: ");
    scanf("%d", &prnum);
    scanf("%d", &senum);
    if(prnum == senum)printf("Los numeros ingresados son iguales.");
    else printf("Los numeros ingresados son distintos.");
    return 0;
}