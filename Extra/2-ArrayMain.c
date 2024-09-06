#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define liminf 10
#define limupp 20
#define tamano 50

// 
// pasar a funcion

int main(void){
    srand(time(NULL));
    int VectorA[tamano];
    int cantm;
    for(int i=0;i<tamano;i++){
        VectorA[i] = rand()%(liminf-limupp+1)+20;
        printf("%d\n", VectorA[i]);
        if(VectorA[i]==20) cantm++;
    }
    printf("El numero mayor %d se repitio %d veces", limupp,cantm);
    return 0;
    
}