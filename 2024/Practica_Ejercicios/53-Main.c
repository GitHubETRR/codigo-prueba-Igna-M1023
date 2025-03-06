#include <stdio.h>

int main(void){
    int num;
    for(num=1;num<51;num++){
        if(num%2==0) printf("%d es un numero par\n", num);
    }
    return 0;
}