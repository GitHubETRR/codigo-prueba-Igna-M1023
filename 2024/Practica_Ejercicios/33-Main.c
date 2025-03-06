#include <stdio.h>

int main(void){
    int prnum,senum,tenum;
    printf("Ingrese 3 numeros enteros: ");
    scanf("%d %d %d", &prnum,&senum,&tenum);
    if(prnum > senum && prnum > tenum)printf("El numero mas chico es %d", tenum);
    return 0;
}