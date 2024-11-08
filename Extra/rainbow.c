#include <stdio.h>

int main(void){
    for(int i=30;i<38;i++){
        printf("\033[0;3%dmHello World!\033[0m\n",i);
    }
    return 0;
}

//Codigo que funciona extraido de github
/*#include <stdio.h>

int main(void) {
    const char *colors[] = {
        "\033[0;30m", "\033[0;31m", "\033[0;32m", "\033[0;33m",
        "\033[0;34m", "\033[0;35m", "\033[0;36m", "\033[0;37m"
    };

    for (int i = 0; i < 8; i++) {
        printf("%sHello World!\033[0m\n", colors[i]);
    }

    return 0;
}
*/