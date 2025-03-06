#include <stdio.h>   
#include <stdlib.h>   
#include <string.h>   
#include <time.h>     

#define LARGE 32           
#define BIOLARGE 64       
#define VIDAININ 300      
#define VIDAMAXN 300       
#define VIDAINIR 300       
#define VIDAMAXR 300     

typedef struct {
    char nombre[LARGE];     
    int danomin;          
    int danomax;         
    int saludmin;       
    int saludmax;       
    int multdano;        
    int usos;              
} caracteristicas_t;

typedef struct {
    char nombre[LARGE];     
    char bio[BIOLARGE];     
    int vida;             
    int vidamax;          
    caracteristicas_t poder1, poder2, poder3;
    caracteristicas_t danio1, danio2, danio3, danio4; 
    int multiplicador;   
} personaje_t;

// Función para mostrar el estado
void mostrar_estado(personaje_t *p) {
    printf("\033[32;4m%s - Vida: %d / %d\033[0m\n\n", p->nombre, p->vida, p->vidamax);
}

    // Función para ejecutar un poder
    void realizar_poder(personaje_t *jugador, caracteristicas_t *poder) {
        if (poder->usos > 0) {  // Verifica usos
            if (poder->saludmin > 0 && poder->saludmax > 0) {  // Comprueba si es un poder de curación
                int curacion = poder->saludmin + (rand() % (int)(poder->saludmax - poder->saludmin + 1));
                jugador->vida += curacion;  // Aplica la curación
                if (jugador->vida > jugador->vidamax) jugador->vida = jugador->vidamax;  // Limita la vida máxima
                printf("\n\033[32;1m%s usa %s y se cura %d puntos de vida!\033[0m\n\n", jugador->nombre, poder->nombre, curacion);
                if (poder->multdano > 0) {  // Aplica un multiplicador de daño si tiene
                    jugador->multiplicador = poder->multdano;
                    printf("\033[36;1m%s usa %s y su próximo ataque tendrá x%d daño!\033[0m\n\n\n", jugador->nombre, poder->nombre, poder->multdano);
                }
            }
            poder->usos--;  // Reduce el número de usos disponibles
        } else {
            printf("\n\033[31;4m%s ya no puede usar %s!\033[0m\n\n", jugador->nombre, poder->nombre);
        }
    }

    // Función para realizar un ataque
    void realizar_ataque(personaje_t *atacante, personaje_t *defensor, caracteristicas_t *ataque) {
        if (ataque->usos > 0) {  // Verifica si el ataque tiene usos
            int dano = ataque->danomin + (rand() % (int)(ataque->danomax - ataque->danomin + 1));
            dano *= atacante->multiplicador;  // Multiplica el daño si está activo
            defensor->vida -= dano;  // Reduce la vida del defensor
            if (defensor->vida < 0) defensor->vida = 0;  // Evita valores negativos de vida
            printf("\n\033[31;1m%s usa %s e inflige %d de dano a %s!\033[0m\n\n", atacante->nombre, ataque->nombre, dano, defensor->nombre);
            atacante->multiplicador = 1;  // Resetea el multiplicador de daño
            ataque->usos--;  // Reduce los usos del ataque
        } else {
            printf("\033[31;4m%s ya no puede usar %s!\033[0m\n\n\n\n", atacante->nombre, ataque->nombre);
        }
    }

// Función para elegir
void turno_jugador(personaje_t *jugador, personaje_t *oponente) {
    int eleccion;
    printf("\nTurno de %s:\n", jugador->nombre);
    printf("Poderes:\n");
    printf("1. %s (%d)\n", jugador->poder1.nombre, jugador->poder1.usos);
    printf("2. %s (%d)\n", jugador->poder2.nombre, jugador->poder2.usos);
    printf("3. %s (%d)\n", jugador->poder3.nombre, jugador->poder3.usos);
    printf("Ataques:\n");
    printf("4. %s (%d)\n", jugador->danio1.nombre, jugador->danio1.usos);
    printf("5. %s (%d)\n", jugador->danio2.nombre, jugador->danio2.usos);
    printf("6. %s (%d)\n", jugador->danio3.nombre, jugador->danio3.usos);
    printf("7. %s (∞)\n", jugador->danio4.nombre);
    printf("Elige un ataque o poder: ");
    scanf("%d", &eleccion);

    // Seleccionar lo que se va a realizar
    switch (eleccion) {
        case 1:
            realizar_poder(jugador, &jugador->poder1);
            break;
        case 2:
            realizar_poder(jugador, &jugador->poder2);
            break;
        case 3:
            realizar_poder(jugador, &jugador->poder3);
            break;
        case 4:
            realizar_ataque(jugador, oponente, &jugador->danio1);
            break;
        case 5:
            realizar_ataque(jugador, oponente, &jugador->danio2);
            break;
        case 6:
            realizar_ataque(jugador, oponente, &jugador->danio3);
            break;
        case 7:
            realizar_ataque(jugador, oponente, &jugador->danio4);
            break;
        default:
            printf("\n\033[0m\n\nOpción no válida!\033[0m\n\n");
    }
}

// Gnera valores aleatorios para que no siempre sean los mismos valores aleatorios
int main(void) {
    srand(time(NULL));

    // Define el personaje Nikitox
    personaje_t nikitox = {
        "Nikitox", "Nikitox es un adolescente...", VIDAININ, VIDAMAXN, 
        {"Volar", 0, 0, 5, 15, 0, 4},
        {"Ataque de ira", 0, 0, 50, 60, 2.5, 2},
        {"SuperFuerza", 0, 0, 70, 75, 3, 1},
        {"Aleteo", 20, 30, 0, 0, 0, 4},
        {"Patada 360°", 40, 45, 0, 0, 0, 3},
        {"Corte con tramontina", 55, 65, 0, 0, 0, 2},
        {"Ataque basico", 10, 10, 0, 0, 0, 999},
        1  // Multiplicador inicial de daño
    };

    // Define el personaje Ruby
    personaje_t ruby = {
        "Ruby", "Rubén Larreta, con un sentido de justicia...", VIDAINIR, VIDAMAXR,
        {"Tomar cafe", 0, 0, 15, 45, 1.1, 3},
        {"Comer un grido familiar", 0, 0, 60, 75, 0, 1},
        {"Colocar panel solar", 0, 0, 20, 40, 2, 2},
        {"Tirarte un sobre de azucar", 10, 25, 0, 0, 0, 4},
        {"Conectarte a 220V", 50, 65, 0, 5, 0, 2},
        {"Tirarte cafe", 20, 35, 0, 0, 0, 3},
        {"Ataque basico", 10, 10, 0, 0, 0, 999},
        1  // Multiplicador inicial de daño
    };

    // Buecle del juego
    while (nikitox.vida > 0 && ruby.vida > 0) {
        mostrar_estado(&nikitox);
        mostrar_estado(&ruby);
        turno_jugador(&nikitox, &ruby);  // Turno de Nikitox
        if (ruby.vida <= 0) break;  // Termina si Ruby pierde toda su vida
        turno_jugador(&ruby, &nikitox);  // Turno de Ruby
    }

    // Muestra el ganador
    if (nikitox.vida > 0) {
        printf("\n\033[33;1m¡Nikitox wins!\033[0m\n");
    } else {
        printf("\n\033[33;1m¡Ruby wins!\033[0m\n");
    }

    return 0;
}
