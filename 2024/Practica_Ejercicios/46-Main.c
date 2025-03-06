#include <stdio.h>

int main(void){
    int numb,i;
    printf("Ingrese un numero del 1 al 10: ");
    scanf("%d", &numb);
    if(numb>10 || numb<1)printf("Este numero no esta permitido");
    for(i=1;i<11;i++){
        printf("%d x %d da %d\n", numb, i, numb*i);
    }
    return 0;
}