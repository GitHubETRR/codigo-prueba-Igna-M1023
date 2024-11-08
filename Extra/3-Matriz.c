#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define liminf 1
#define limupp 100
#define N 10

// MUESTRA ALGUNOS PRIMOS Y ALGUNOS NO 
// TAMBIEN FALTA GUARDARLOS EN UN VECTOR
/*Ingresar una matriz, de NxN valores en forma aleatoria, entre 1 y 30, donde N es 5,
informar el valor máximo y su ubicación*/
int esPrimo(int);
void mostrarVector(int[]);

int main(void){
    srand(time(NULL));
    int vector[N*N]={};
    int matriz[N][N]={};
    int max = liminf;
    int max_fil = 0, max_col = 0, i=0;
    for (int col = 0; col < N; col++) {   // Por columna
        for (int fil = 0; fil < N; fil++) {  // Por Fila
            matriz[col][fil] = (rand() % (limupp - liminf + 1)) + liminf; // Asignarle un valor entre liminf y limupp
            if (esPrimo(matriz[col][fil])) {
                vector[i] = matriz[col][fil];
                i++;
        }
    }
    mostrarVector(vector);
    return 0;
    }
}

int esPrimo(int numerop){
    int primo;
    if(numerop<=1) printf("No es primo");
    for(int i=2;i < numerop;i++){
        if (numerop % i == 0) return 0;
    }
    return 1;
}

void mostrarVector(int a[]) {
    for (int i = 0; i < N * N; i++) {
        if (a[i] != 0) { 
            printf("\nDato <%d>:%d", i + 1, a[i]);
        }
    }
}
