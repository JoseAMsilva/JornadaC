//programa para receber a temperatura e Fahrenheith e imprimir na tela a temperatura em Celcius.
#include <stdio.h>

int main(){
    float C, F;
    printf("insira a temperatura em fahrenheith:\n");
    scanf("%f", & F);
    C = (5.0/9.0) * (F - 32);
    printf("A temperatura em Celcius é de %.2fC°", C);
    return 0;
}