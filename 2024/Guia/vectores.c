#include <stdio.h>

int main(void){
    int vector1[2]; //declaro un vector con 2 espacios, siendo int
    char vector2[2]; //declaro un vector con 2 espacios, siendo char
    int vector3[]={1,2,3,4,5}; //declaro un vector sin un tamaño definido, dandole los valores que contiene
    char vector4[]={'h','o','l','a','\0'}; //string usando un vector con char
    // Añadir datos a un vector con un bucle
    float vector5[5];
    for (int i = 0; i < 5; i++) {
        vector5[i] = (float)i * 2.1;
    }
    // 
    printf("%d\n", vector3[1]); //Mostrar el valor que se encuentra en una posicion del vector (Empieza por 0)
    // Bucle que muestra todos los valores del vector
    for (int i = 0; i < 5; i++) {
        printf("%d ", vector3[i]);
    }
    //
    printf("%s\n", vector4); // Una forma de mostrar el vector (Usando string)
    // Mostrar el vector usando char 
    int i = 0;
    while (vector4[i]) {
        printf("%c", vector4[i++]);
    }
    //
    return 0;
}