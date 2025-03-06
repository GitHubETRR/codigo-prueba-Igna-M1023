#include <stdio.h>
// sin terminar
/* int main(void){
    int ingdia,ingmes,ingaño;
    printf("Ingrese la fecha a calcular de esta forma (DD MM AAAA) \n");
    scanf("%d %d %d", &prhoras, &prminutos, &prsegundos);
    return 0;
}

*/ 
int main(void){
    int fecha,anios,mes,dia;
    printf("Ingrese la fecha a calcular de esta forma (DDMMAAAA): ");
    scanf("%d", &fecha);
    anios = fecha/1000000;
    mes = fecha/10000 % 10;
    dia = fecha/10000;
    printf("La fecha en DD-MM-AAAA es: %d/%d/%d", anios,mes,dia);
    return 0;
}