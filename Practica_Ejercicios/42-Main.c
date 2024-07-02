#include <stdio.h>
#include <ctype.h>

int main(void){
    char charing;
    printf("Ingrese un caracter: ");
    scanf("%c", &charing);
    char caracter = toupper(charing);
    if(caracter==65 || caracter==69 || caracter==73 || caracter==79 || caracter==85){
        printf("El caracter ingresado es una vocal");
    }
    else{
        printf("Este caracter no es una vocal");
    }
    return 0;
}