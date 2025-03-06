#include <stdio.h>
#include <string.h>
#define MAX_CHAR 64
#define MAX_TYPEDEF 512
int AddProducto();
void LeerStock();
void menu (void);
//void EditarProducto();
int SumProd();

typedef enum{
    INGRESAR=1,
    MOSTRAR,
    ELIMINAR,
    EDITAR,
    SALIR
}opciones_t;

typedef struct{
    char nombre[MAX_CHAR];
    int idbar;
    float preciocompraprod;
    float precioventa;
    int cantidad;
}producto;

int main(void){
    menu();
    return 0;
}

void menu (void){
    FILE* config;
    config = fopen("stock.txt", "r");
    if(config == NULL){
        fclose(config);
        FILE* line;
        line = fopen("stock.txt", "a");
        fprintf(line, "%s %s %s %s %s", "ID", "Nombre", "Pre.C", "Pre.V", "Cantidad");
        fclose(line);
    }
    opciones_t op;
    producto productos[MAX_TYPEDEF]={0};
    do{
        printf("Menu\n");
        printf("1_Ingresar productos\n");
        printf("2_Mostrar productos\n");
        //printf("3_Eliminar un alumno\n");
        //printf("4_Editar un alumno\n");
        //printf("5_Salir\n");
        scanf("%d",&op);
        switch (op){
            case INGRESAR:
                 AddProducto(productos);
                break;
            case MOSTRAR:
                 LeerStock();
                break;
            case ELIMINAR:
                 SumProd();
                break;
            case EDITAR:
                break;
        }   
    }while(op!=SALIR);
}

int AddProducto(producto productos[]){
    FILE* archivo;
    archivo = fopen("stock.txt", "a+");
    int idbartemp;
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
    scanf(" %d", &productos[idbartemp].cantidad);
    fprintf(archivo, "\n%d %s %.2f %.2f %d", idbartemp, productos[idbartemp].nombre, productos[idbartemp].preciocompraprod, productos[idbartemp].precioventa, productos[idbartemp].cantidad);
    fclose(archivo);
}

void LeerStock(){
    FILE* archivo;
    int display;
    archivo = fopen("stock.txt", "r");
    while (1) {
        // reading file
        display = fgetc(archivo);
        // end of file indicator
        if (feof(archivo))
            break;
        // displaying every characters
        printf("%c", display);
    } // Otra forma de leerlo??
    fclose(archivo);
} // Imprime todos los productos juntos, faltaria separarlos en una lista

/*void EditarProducto(){
    FILE* archivo;
    archivo = fopen("stock.txt", "a+");
}*/


//
int SumProd(){
    int tempcom, tempvent;
    FILE* archivo;
    archivo = fopen("stock.txt", "r");
    char buf[MAX_TYPEDEF];
    int casino;
    fseek(archivo, 31, SEEK_SET);
    while (fscanf(archivo, "%*s %*s %s %*s %*s", casino) == 1){
        printf("%d\n", casino);
    }
}