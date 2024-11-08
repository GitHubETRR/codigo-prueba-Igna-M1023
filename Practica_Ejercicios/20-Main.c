#include <stdio.h>

int main(void){
    int horas,minutos,segundos,segundosres,segundosfinal;
    printf("Ingrese los segundos: ");
    scanf("%d", &segundos);
    horas = segundos/3600;
    segundosres = segundos % 3600;
    minutos = segundosres/60;
    segundosfinal = segundosres % 60;
    printf("Su hora es: %d:%d:%d",horas,minutos,segundosfinal);
    return 0;
}