#include <stdio.h>

int main(void){
    int num,veces,divisor;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &num);
    for(veces=1;veces<=num;veces++){
        if(num%veces == 0) printf("%d es dividor de %d \n",veces,num);
    }
    return 0;
}