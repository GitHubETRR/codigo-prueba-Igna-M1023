#include <stdio.h>
int fechaValida(int,int,int);

int main(void){
    int dia,mes,anio;
    printf("Ingrese la fecha como tres enteros (DD -- MM -- AAAA): ");
    scanf("%d %d %d", &dia, &mes, &anio);
    fechaValida(dia,mes,anio);
    return 0;
}

int fechaValida(int diaf,int mesf,int aniof){
    if(aniof%4==0 && aniof%100!=0){
        
    }
}