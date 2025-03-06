#include <stdio.h>

int esBisiesto(int);

int main(void){
    int anio;
    printf("Ingrese un año para saber si es Bisiesto: ");
    scanf("\n%d",&anio);
    esBisiesto(anio);
    return 0;
}

int esBisiesto(int aniof){
    if(aniof%4==0 && aniof%100!=0) printf("Es un año bisiesto");
    else printf("Este año no es bisiesto");
}