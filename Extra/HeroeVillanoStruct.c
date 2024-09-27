#include <stdio.h>
#include <string.h>
#define LARGE 32
#define BIOLARGE 64
#define VIDAININ 100
#define VIDAMAXN 150
#define VIDAINIR 100
#define VIDAMAXR 150
#define DANOBN 10
#define DANOBR 15
// ataque basico
typedef struct{
    char nombre[LARGE];
    float dano;
    float dano2;
    float salud;
    float salud2;
    float multdano;
    int usos;
} caracteristicas_t;  

typedef struct{
    char nombre[LARGE];
    char bio[BIOLARGE];
    float vida;
    float vidamax;
    int danobasico;
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
    VIDAININ,
    VIDAMAXN,
    DANOBN,
        {
            "Volar",
            0,
            0,
            5,
            15,
            0,
            4
        },
        {
            "Ataque de ira",
            0,
            0,
            50,
            60,
            2.5,
            2
        },
        {
            "SuperFuerza",
            0,
            0,
            70,
            75,
            3,
            1
        },
        {
            "Aleteo",
            20,
            30,
            0,
            0,
            0,
            4
        },
        {
            "Patada 360°",
            40,
            45,
            0,
            0,
            0,
            3
        },
        {
            "Corte con tramontina",
            55,
            65,
            0,
            0,
            0,
            2
        }
    };
    personaje_t Ruby = {
    "Ruby",
    "Rubén Larreta hijo de Horacio Larreta, a temprana edad despertó un sentimiento de justicia que se apodero de su mente.",
    VIDAINIR,
    VIDAMAXR,
    DANOBR,
        {
            "Tomar café",
            0,
            0,
            15,
            45,
            1.1,
            3
        },
        {
            "Comer un grido familiar",
            0,
            0,
            60,
            75,
            0,
            1
        },
        {
            "Colocar panel solar",
            0,
            0,
            20,
            40,
            2,
            2
        },
        {
            "Tirarte un sobre de azúcar",
            10,
            25,
            0,
            0,
            0,
            4
        },
        {
            "Conectarte a 220V",
            50,
            65,
            0,
            5,
            0,
            2
        },
        {
            "Tirarte café",
            20,
            35,
            0,
            0,
            0,
            3
        }
    };
}