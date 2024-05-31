#include <stdio.h>

int main(void){
    int prhoras,prminutos,prsegundos;
    int sehoras,seminutos,sesegundos;
    printf("Ingrese la primera hora a sumar de esta forma: Hora - Minutos - Segundos: \n");
    scanf("%d %d %d", &prhoras, &prminutos, &prsegundos);
    printf("Ingrese la segunda hora a sumar de esta forma: Hora - Minutos - Segundos: \n");
    scanf("%d %d %d", &sehoras, &seminutos, &sesegundos);
    return 0;
}