#include <stdio.h>

void tablaDeMultiplicar(int);

int main(void){
    int numf;
    printf("Ingrese un numero para mostrar su tabla de multiplicar: ");
    scanf("%d", &numf);
    tablaDeMultiplicar(numf);
    return 0;
}

void tablaDeMultiplicar(int numerom){
    for(int ivalor=0;ivalor<11;ivalor++){
        printf("%d * %d = %d\n", numerom, ivalor, numerom*ivalor);
    }
}
