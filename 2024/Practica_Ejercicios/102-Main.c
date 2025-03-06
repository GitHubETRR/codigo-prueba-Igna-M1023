#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define limupp 54
#define liminf 1
#define numgan 6

int main(void){
    srand(time(NULL));
    int numerosor[numgan];
    for (int i = 0; i < numgan; i++) {
        numerosor[i] = (rand() % (limupp - liminf + 1)) + liminf;
    }
    for (int i = 0; i < numgan; i++) {
        if(i!=(numgan-1)){
            printf("%d-", numerosor[i]);
        }
        else{
            printf("%d", numerosor[i]);
        }
    }
    return 0;
}   


// (rand() % (limupp - liminf + 1)) + liminf;