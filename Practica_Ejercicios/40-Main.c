#include <stdio.h>

int main(void){
    int dia,mes,anio;
    printf("Ingrese la fecha como tres enteros (DD -- MM -- AAAA): ");
    scanf("%d %d %d", &dia, &mes, &anio);
    if(mes==1) printf("La persona nacio el %d de enero de %d", dia, anio);
    if(mes==2) printf("La persona nacio el %d de febrero de %d", dia, anio);
    if(mes==3) printf("La persona nacio el %d de marzo de %d", dia, anio);
    if(mes==4) printf("La persona nacio el %d de abril de %d", dia, anio);
    if(mes==5) printf("La persona nacio el %d de mayo de %d", dia, anio);
    if(mes==6) printf("La persona nacio el %d de junio de %d", dia, anio);
    if(mes==7) printf("La persona nacio el %d de julio de %d", dia, anio);
    if(mes==8) printf("La persona nacio el %d de agosto de %d", dia, anio);
    if(mes==9) printf("La persona nacio el %d de septiembre de %d", dia, anio);
    if(mes==10) printf("La persona nacio el %d de octubre de %d", dia, anio);
    if(mes==11) printf("La persona nacio el %d de noviembre de %d", dia, anio);
    if(mes==12) printf("La persona nacio el %d de diciembre de %d", dia, anio);
    return 0;
}