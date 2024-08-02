#include <stdio.h>

int main(void){
    int buce,total;
    int numb=0;
    printf("Ingrese un numero: ");
    scanf("%d", &numb);

    while(numb >= 0){
        buce++; 
        total += numb; 
        printf("Ingrese un numero: ");
        scanf("%d", &numb);
    }

    printf("%d %d %d",numb,total,buce);
    printf("El promedio es: %d", total/buce);
    return 0;
}    