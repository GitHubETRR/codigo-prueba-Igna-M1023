<<<<<<< HEAD
#include <stdio.h>

void LeerDevolverDatos();

int main(void){
    LeerDevolverDatos();
    return 0;
}

void LeerDevolverDatos(){
    FILE* archivo;
    archivo = fopen("config.txt", "r");
    if(archivo==NULL)perror("Can't open file");
    //LEER DATOS Y DEVOLVER UN STRUCT
}

/*    
    int caracter;
    int numvocales;
    while ((caracter = fgetc(archivo)) != EOF)
    {
        if("%c", strchr(vocal,caracter) != NULL){
            numvocales++;
        }
    }
=======
#include <stdio.h>

void LeerDevolverDatos();

int main(void){
    LeerDevolverDatos();
    return 0;
}

void LeerDevolverDatos(){
    FILE* archivo;
    archivo = fopen("config.txt", "r");
    if(archivo==NULL)perror("Can't open file");
    //LEER DATOS Y DEVOLVER UN STRUCT
}

/*    
    int caracter;
    int numvocales;
    while ((caracter = fgetc(archivo)) != EOF)
    {
        if("%c", strchr(vocal,caracter) != NULL){
            numvocales++;
        }
    }
>>>>>>> 96db6a7bbdf75c06c43e8404ed47642d39cdf753
*/