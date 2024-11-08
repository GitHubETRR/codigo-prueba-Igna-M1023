#include <stdio.h>
#include <ctype.h>

int main(void){
    char charing;
    printf("Ingrese un caracter: ");
    scanf("%c", &charing);
    char caracter = toupper(charing);
    if(caracter=='A' || caracter=='E' || caracter=='I' || caracter=='O' || caracter=='U'){
        printf("El caracter ingresado es una vocal");
    }
    else{
        printf("Este caracter no es una vocal");
    }
    return 0;
}