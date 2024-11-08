#include <stdio.h>
#include <math.h> 

int main(void){
    float Modulo;
    float Angulo;
    float Real;
    float Imaginario;
    printf("Ingrese el modulo: ");
    scanf("%f", &Modulo);
    printf("Ingrese el angulo: ");
    scanf("%f", &Angulo);
    Real=Modulo*cos(Angulo*M_PI/180);
    Imaginario=Modulo*sin(Angulo*M_PI/180);
    printf("La parte real es: %f y la parte imaginaria es: J%f",Real,Imaginario);
    return 0;
}
