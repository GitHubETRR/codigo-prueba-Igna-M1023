#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define liminf 1
#define limupp 15
#define N 5

/*Ingresar una matriz, de NxN valores en forma aleatoria, entre 1 y 30, donde N es 5,
informar el valor máximo y su ubicación*/

int main(void){
    srand(time(NULL));
    int matriz[N][N]={};
    int max = liminf;
    int max_fil = 0, max_col = 0;
    for (int col = 0; col < N; col++) {
        for (int fil = 0; fil < N; fil++) {
            matriz[col][fil] = (rand() % (limupp - liminf + 1)) + liminf;
            if (matriz[col][fil] > max) {
                max = matriz[col][fil];
                max_fil = col;
                max_col = fil;
            }
        }
    }
    printf("Valor maximo: %d\n", max);
    printf("Ubicacion maximo: Fila %d, Columna %d\n", max_fil + 1, max_col + 1);
    return 0;
}