#include <stdio.h>
#include <locale.h>
#define dolarblue 1265 //Se podria mejorar con una API
void CalcTNA();
void ConversorDP();

int main(void){
    int opcion;
    printf("Eliga una opcion: \n1- Calculadora Rendimientos TNA\n2- Convesor Dolar/Peso\n");
    scanf("%d",&opcion);
    switch(opcion){
        case 1: CalcTNA();
                break;
        case 2: ConversorDP();
                break;
    }
}

void CalcTNA(){
    float tna, montoinicial;
    setlocale(LC_NUMERIC, "French_Canada.1252");
    printf("Ingrese el capital inicial: ");
    scanf("%f", &montoinicial);
    printf("Ingrese la TNA: ");
    scanf("%f", &tna);
    printf("%% Rendimiento diario: %f%%", tna/365);
    printf("\nRendimiento diario: $%f", (tna/365/100)*montoinicial);
};

void ConversorDP(){
    int opcion;
    float dolar,pesos;
    printf("Ingrese 1 para pasar de dolar a pesos, 2 para pesos a dolar (Usando dolar blue): ");
    scanf("%d", &opcion);
    if(opcion==1){
        printf("Ingrese los dolares que tiene: ");
        scanf("%f", &dolar);
        printf("Serian %f pesos", dolar*dolarblue);
    }
    if(opcion==2){
        printf("Ingrese los pesos que tiene: ");
        scanf("%f", &pesos);
        printf("Serian %f dolares", pesos/dolarblue);
    }
}