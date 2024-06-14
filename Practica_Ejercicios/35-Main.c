#include <stdio.h> 

int main(void){
    int numeroin;
    printf("Ingrese el numero de 4 digitos: ");
    scanf("%d", &numeroin);
    // si el primer y ultimo son iguales, ademas del segundo y tercero 
    if((numeroin / 1000) == numeroin % 10 && (numeroin % 1000 / 100) == (numeroin / 10 % 10)){
        printf("Este numero es capicua");
    }else{
        printf("Este numero no es capicua");
    }
    return 0;
}