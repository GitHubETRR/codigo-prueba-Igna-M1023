#include <stdio.h>

int main(void){
    int nota;
    printf("Ingrese la nota del alumno/a: ");
    scanf("%d", &nota);
    if(nota==10)printf("El alumno obtuvo un sobresaliente.");
    if(nota==9||nota==8)printf("El alumno obtuvo un distinguido");
    if(nota==7||nota==6)printf("El alumno obtuvo un bueno");
    if(nota==5||nota==4)printf("El alumno obtuvo un aprobado");
    if(nota==3||nota==2||nota==1)printf("El alumno obtuvo un reprobado");
    if (nota < 1 || nota > 10)printf("La nota no es valida");
    return 0;
}