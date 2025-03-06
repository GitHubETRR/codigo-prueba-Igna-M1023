#include <stdio.h>

int main(void){
    float prlado,selado,telado;
    printf("Ingrese los 3 lados de un triangulo: ");
    scanf("%f %f %f", &prlado, &selado, &telado);
    if((prlado+selado>telado) && (prlado+telado>selado) && (selado+telado>prlado)){
        printf("Este triangulo es posible \n");
        if(prlado==selado && prlado==telado && telado==selado)printf("Este triangulo es rectangulo");
        if(prlado!=selado && prlado!=telado && telado!=selado)printf("Este triangulo es escaleno");
        else printf("Este triangulo es isosceles");
    }else{
        printf("No es posible este triangulo");
    }
    return 0;
}