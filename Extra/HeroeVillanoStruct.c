#include <stdio.h>
#include <string.h>
#define LARGE 32
#define BIOLARGE 64
#define VIDAINI 100
#define VIDAMAX 150

typedef struct{
    char nombre[LARGE];
    float dano;
    float dano2;
    float salud;
    float salud2;
    int usos;
} caracteristicas_t;  

typedef struct{
    char nombre[LARGE];
    char bio[BIOLARGE];
    float vida;
    float vidamax;
    caracteristicas_t danio1;
    caracteristicas_t danio2;
    caracteristicas_t danio3;
    caracteristicas_t poder1;
    caracteristicas_t poder2;
    caracteristicas_t poder3;
} personaje_t;



int main(void){
    personaje_t nikitox = {
    "Nikitox",
    "Nikitox es un adolescente...",
    VIDAINI,
    VIDAMAX,
    {
        "Ataque Choripan",
        50,
        100,
        0,
        0,
        3
    }
    };
    printf("%s\n", nikitox.nombre);
    printf("%s\n", nikitox.bio);
    printf("%.2f\n", nikitox.vida);
    printf("%.2f\n", nikitox.vidamax);
    printf("%s\n", nikitox.danio1.nombre);
    printf("%.2f\n", nikitox.danio1.dano);
    printf("%.2f\n", nikitox.danio1.dano2);
    printf("%.2f\n", nikitox.danio1.salud);
    printf("%.2f\n", nikitox.danio1.salud2);
    printf("%d\n", nikitox.danio1.usos);
}