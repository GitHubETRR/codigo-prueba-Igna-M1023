#include <stdio.h>

int main(void){
    int tipo,peso,costo;
    printf("Ingrese 1 si es corta distancia, 2 si es larga distancia: ");
    scanf("%d", &tipo);
    printf("Ingrese el peso del envio: ");
    scanf("%d", &peso);

    if (tipo == 1) {
        if(peso > 20)costo = 800 * (peso - 20);
        costo+= 1500;
    } else if (tipo == 2) {
        if(peso > 20)costo = 800 * ((peso-20)/5); 
        costo+= 2000;
    }
    printf("El costo del envio seria %d", costo);
    return 0;
}