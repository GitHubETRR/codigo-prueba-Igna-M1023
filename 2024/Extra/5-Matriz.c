#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <stdlib.h>
#define N1 3
#define N2 5
int VentasMes(int ventas[N1][N2]);
int VentasProv(int ventas[N1][N2]);
int VentasTrim(int ventas[N1][N2]);

int main(void){
    setlocale(LC_ALL,"");
    int opcion;
    int ventas[N1][N2] = {
        {234, 567, 789, 345, 678},
        {456, 890, 123, 678, 901},
        {321, 654, 987, 432, 876}
    };
    printf("1 - Ventas totales por mes\n2 - Ventas totales por provincia\n3 - Ventas totales en este trimestre");
    scanf("%d", &opcion);
    switch(opcion){
        case 1: VentasMes(ventas);
                break;  
        case 2: VentasProv(ventas);
                break; 
        case 3: VentasTrim(ventas);    
    }
    return 0;
}

int VentasMes(int a[N1][N2]){
    int venmesenero,venmesfebrero,venmesmarzo;
    for (int fil = 0; fil < N2; fil++) {   
        venmesenero += a[0][fil];
    }
    for (int fil = 0; fil < N2; fil++) {   
        venmesfebrero += a[1][fil];
    }
    for (int fil = 0; fil < N2; fil++) {   
        venmesmarzo += a[2][fil];
    }
    printf("\nVentas totales en enero: %d", venmesenero);
    printf("\nVentas totales en febrero: %d", venmesfebrero);
    printf("\nVentas totales en marzo: %d", venmesmarzo);
}

int VentasProv(int a[N1][N2]){
    int ventasprov[N2]={};
    char mesa[][12]={"Buenos Aires", "Entre Ríos", "Santa Fe", "Córdoba", "San Luis"};
    for (int col = 0; col < N2; col++) {
        for (int fil = 0; fil < N1; fil++) {
            ventasprov[col] += a[fil][col];
        }
    }
    printf("Ventas totales por provincia:\n");
    for (int col = 0; col < N2; col++) {
        printf("Provincia %s: %d\n", mesa[col], ventasprov[col]);
    }
}

int VentasTrim(int a[N1][N2]){
    int ventastotales;
    for (int col = 0; col < N2; col++) {
        for (int fil = 0; fil < N1; fil++) {
            ventastotales += a[fil][col];
        }
    }
    printf("El numero de ventas en el trimestre fue de %d", ventastotales);
}