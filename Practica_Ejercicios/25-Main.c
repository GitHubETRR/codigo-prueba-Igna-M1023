#include <stdio.h>

int main(void){
    int horastrabajo,antiguedad,sueldoneto;
    printf("Calculadora de sueldos\n");
    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%d", &horastrabajo);
    printf("Ingrese la antiguedad: ");
    scanf("%d", &antiguedad);
    sueldoneto = (4500*horastrabajo) + (1.02*antiguedad*4500);
    printf("El sueldo es de %d", sueldoneto);
    return 0;
}