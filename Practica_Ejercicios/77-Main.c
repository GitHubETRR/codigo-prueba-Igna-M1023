#include <stdio.h>

int ingresarProducto();

int main(){
    ingresarProducto();
    return 0;
}

int ingresarProducto(){
    int IDProd,condicion,cantidad;
    float costo,costoventa;
    printf("Para salir del bucle pulse 0\n");
    do{
        printf("Ingrese el ID del producto (0-1000): ");
        scanf("%d", &IDProd)    ;
        if(IDProd>0 && IDProd<1000){
            printf("Ingrese el precio de costo: ");
            scanf("%f", &costo);
            printf("Ingrese el precio de venta: ");
            scanf("%f", &costoventa);
            printf("Ingrese la cantidad vendida: ");
            scanf("%f", &cantidad);
        }
        else printf("El ID ingresado no es valido.");
    }while(IDProd != 0);
}

