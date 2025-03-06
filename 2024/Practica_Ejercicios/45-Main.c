#include <stdio.h>

int main(void){
    int numing,numcal;
    for(numing=0;numing<10;numing++){
        printf("Ingrese un numero: ");
        scanf("%d", &numcal);
        if(numcal>=0) printf("Este numero es un positivo\n");
    }
    return 0;
}