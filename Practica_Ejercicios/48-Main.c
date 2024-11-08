#include <stdio.h>

int main(void){
    int numb,positivos=0,negativos=0;
    printf("%d\n", negativos);
    printf("%d\n", positivos);
    for(numb=1;numb!=0;){
        printf("Ingrese un numero: ");
        scanf("%d", &numb);
        if(numb>0) positivos++;
        if(numb<0) negativos++;
    }
    printf("Ingresaste %d numeros positivos y %d negativos", positivos, negativos);
    return 0;
}