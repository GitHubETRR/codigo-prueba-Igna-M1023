#include <stdio.h>

int main(void){
    int num1,num2,factor;
    char letra;
    printf("Ingrese 2 numeros: ");
    scanf("%d %d", &num1, &num2);
    printf("Ingrese P para numeros pares y I para impares: ");
    scanf(" %c", &letra);
    if((letra=='P'||letra=='p'||letra=='I'||letra=='i') && (num1<num2)){
        for(factor=num1;num2<factor;factor++){
            if(factor%2==0) printf("%d es un numero par\n", factor);
            else printf("NO ANDA");
        }
    }
    else printf("No ok");
    return 0;
}