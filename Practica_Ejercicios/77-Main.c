#include <stdio.h>

int ingresarProducto();

int main(){
    ingresarProducto();
    return 0;
}

int ingresarProducto(){
    int IDProd,condicion,cantidad,cantidadidproductos=0;
    float costo,costoventa,gananciaproducto,gananciatotal=0;
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
            scanf("%d", &cantidad);
            gananciaproducto = (costoventa-costo)*cantidad;
            printf("La ganancia del producto es de %.2f\n", gananciaproducto);
            gananciatotal+=gananciaproducto;
            cantidadidproductos++;
        }
        else printf("El ID ingresado no es valido.\n");
    }while(IDProd != 0);
    printf("La ganancia total es de: %f\n", gananciatotal);
    printf("El total de productos ingresados es de: %d", cantidadidproductos);
}

