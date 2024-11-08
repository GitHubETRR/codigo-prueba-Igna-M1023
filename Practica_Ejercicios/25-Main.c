#include <stdio.h>
#define SUELDOBASICO 4500
int main(void){
    int horastrabajo,antiguedad,sueldoneto;
    printf("Calculadora de sueldos\n");
    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%d", &horastrabajo);
    printf("Ingrese la antiguedad: ");
    scanf("%d", &antiguedad);
    sueldoneto = (SUELDOBASICO*horastrabajo)*(1.02*antiguedad);
    printf("El sueldo es de %d", sueldoneto);
    return 0;
}