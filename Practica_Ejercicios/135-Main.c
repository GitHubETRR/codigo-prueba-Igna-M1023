#include <stdio.h>
#include <string.h>

int contarVocales();

int main(void){
    int numvocales;
    FILE* archivo;
    archivo = fopen("vocales.txt", "r");
    numvocales = contarVocales(archivo);
    return 0;
}

int contarVocales(FILE *archivo){
    char vocal[]= "AEIOUaeiou"; 
    int caracter;
    int numvocales;
    while ((caracter = fgetc(archivo)) != EOF)
    {
        if("%c", strchr(vocal,caracter) != NULL){
            numvocales++;
        }
    }
    printf("%d", numvocales);
}