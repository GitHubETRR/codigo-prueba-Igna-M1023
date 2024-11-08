#include <stdio.h>

int main(void){
    int dia,mes,anio;
    printf("Ingrese la fecha como tres enteros (DD -- MM -- AAAA): ");
    scanf("%d %d %d", &dia, &mes, &anio);
    char mesa[][11]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    printf("La persona nacio el %d de %s de %d", dia, mesa[mes-1], anio);
    return 0;
}