#include <stdio.h>

int multiplo(int,int);

int main(void){
    int num1,num2;
    printf("Ingrese 2 valores para comprobar si el primero es multiplo del segundo: ");
    scanf("\n%d %d", &num1, &num2);
    multiplo(num1,num2);
    return 0;
}

int multiplo(int numero1,int numero2){
    if(numero2%numero1==0) printf("Verdadero");
    else printf("Falso");
}


// area rectangulo

int areaRectangulo(int base,int altura,int area){
    
}