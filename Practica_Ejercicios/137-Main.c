#include <stdio.h>
#include <string.h>
#include <time.h>
#define MAXCHAR 256

int fLog(char cadenatext[], FILE *);

int main(void){
    char cadenatext[MAXCHAR];
    printf("Ingrese la cadena de texto: ");
    scanf("%s", cadenatext);
    FILE* archivo;
    archivo = fopen("debug.txt", "a+");
    fLog(cadenatext,archivo);
    return 0;
}

int fLog(char cadenatext[MAXCHAR], FILE *archivo){
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    // printf("%s %d-%02d-%02d %02d:%02d\n", cadenatext,  tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_hour, tm.tm_min);
    fprintf(archivo, "%s %d-%02d-%02d %02d:%02d\n", cadenatext,  tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_hour, tm.tm_min);
    fclose(archivo);
}