#include <stdio.h>

int main(void){
    int prangulo,seangulo;
    printf("Bienvenido al programa");
    printf("\nIngrese el primer angulo interior (en grados): ");
    scanf("%d", &prangulo);
    printf("Ingrese el segundo angulo interior (en grados): ");
    scanf("%d", &seangulo);
    int reangulo = 180-prangulo-seangulo;
    if (reangulo < 0){
        printf("Los valores ingresados no dan un angulo valido");
    }else{
        printf("el angulo interior restante es de: %d", reangulo);
    }
    return 0;
}