#include <stdio.h>
#include <math.h>

int main(void){
    float valorac, valorbc, valorcc, res1, res2;
    printf("Ingrese los coeficientes del polinomio: ");
    scanf("%f %f %f", &valorac, &valorbc, &valorcc);
    res1 = (-valorbc + sqrt(valorbc*valorbc -4 * valorac * valorcc)) / (2*valorac);
    res2 = (-valorbc - sqrt(valorbc*valorbc -4 * valorac * valorcc)) / (2*valorac);
    printf("El valor de la primera raiz es de: %f y la segunda es de %f", res1, res2);
    return 0;
}