#include <stdio.h>

int menu();

int main(void){
    printf("Seleccione una de las siguientes opciones(1-4): ");
    int opcion = menu();
    printf("\nLa opcion seleccionada fue %d", opcion);
    return 0;
}

int menu(){
    int opcion;
    printf("\nOpcion 1\n");
    printf("Opcion 2\n");
    printf("Opcion 3\n");
    printf("Opcion 4\n");
    scanf("%d", &opcion);
    if(opcion==1||opcion==2||opcion==3||opcion==4) printf("Ok");
    else printf("No ok");
    return opcion;
}