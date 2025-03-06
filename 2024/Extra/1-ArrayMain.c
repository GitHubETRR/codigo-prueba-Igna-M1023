#include <stdio.h>
#define TAMANO 5

int SumarVector(int VectorTemp[]);
int PromVector(int VectorTemp[]);

int main(void){
    int VectorTemp[TAMANO]={50,2,40,56,21};
    int resuma = SumarVector(VectorTemp);
    int promedio = PromVector(VectorTemp);
    printf("La suma del array da: %d\n", resuma);
    printf("El promedio del array da: %d", promedio);
    return 0;
}

int SumarVector(int VectorTemp[]){
    int suma=0,i=0;
    for(;i<TAMANO;i++){
        suma+=VectorTemp[i];
    }
    return suma;
}

int PromVector(int VectorTemp[]){
    int suma=0,promedio,i=0;
    for(;i<TAMANO;i++){
        suma+=VectorTemp[i];
    }
    promedio = (suma/i);
    return promedio;
}