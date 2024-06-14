#include <stdio.h>
#include <math.h>

int main(void){
    float ac, bc, cc, var1, var2;
    printf("Ingrese los coeficientes del polinomio: ");
    scanf("%f %f %f", &ac, &bc, &cc);
    var1 = (-bc + sqrt(bc*bc -4 * ac * cc)) / (2*ac);
    var2 = (-bc - sqrt(bc*bc -4 * ac * cc)) / (2*ac);
    printf("El valor de la primera raiz es de: %f y la segunda es de %f", var1, var2);
    return 0;
}