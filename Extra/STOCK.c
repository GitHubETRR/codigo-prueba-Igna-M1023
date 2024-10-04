#include <stdio.h>
#include <string.h>
#define MAX_CHAR 64
#define MAX_TYPEDEF 512
int AddProducto();

typedef struct{
    char nombre[MAX_CHAR];
    int idbar;
    float preciocompraprod;
    float precioventa;
    int cantidad;
}producto;

int main(void){
    int opcion;
    producto productos[MAX_TYPEDEF]={0};
    printf("Bienvenido a la base de stock, aca encontrara todos los productos que se escuentran disponibles.");
    printf("Seleccione una opcion de la lista: \n");
    printf("1- Añadir producto\n");
    scanf("%d", &opcion);
    switch(opcion){
        case 1: AddProducto(productos);
                break;
    }
}

int AddProducto(producto productos[]){
    int idbartemp,continuar;
    do{
        printf("Ingrese la ID del mismo: \n");
        scanf(" %d", &idbartemp);
        productos->idbar = idbartemp;
        printf("Ingrese el nombre del producto a agregar: \n");
        scanf(" %s", &productos[idbartemp].nombre);
        printf("Ingrese el valor de compra/produccion: \n");
        scanf(" %f", &productos[idbartemp].preciocompraprod);
        printf("Ingrese el valor de venta: \n");
        scanf(" %f", &productos[idbartemp].precioventa);
        printf("Ingrese la cantidad: ");
        scanf(" %c", &productos[idbartemp].cantidad);
        printf("Ingrese 1 para añadir otro producto: ");
        scanf(" %d", &continuar);
    }while(continuar != 0);
}