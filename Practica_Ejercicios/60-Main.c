#include <stdio.h>

int sumaIntervalo(int,int);

int main(void){
    int num1,num2,numed;
    printf("Ingrese 2 valores: ");
    scanf("%d %d", &num1, &num2);
    numed = sumaIntervalo(num1,num2);
    printf("La suma de los numeros entre medio da %d", numed);
    return 0;
}

// solo para cuando numero 2 > numero 1
int sumaIntervalo(int numero1,int numero2){
    int sumaint;
    for(int factor=numero1 + 1;factor<numero2;factor++){
        sumaint+=factor;
    }
    return sumaint;
}

// si no
/*
int sumaIntervalo(int numero1,int numero2){
    if(numero2>numero1){
        int sumaint;
        for(int factor=numero1 + 1;factor<numero2;factor++){
            sumaint+=factor;
        }
    }
    else{
        int sumaint;
        for(int factor=numero2 + 1;factor<numero1;factor++){
            sumaint+=factor;
        }
    }
    return sumaint;
}
*/