//Programa que tem como entrada uma velocidade em M/S e imprime na tela o equivalente em KM/H.

#include <stdio.h>

int main(){
    float velocidadems, velocidadekm;
    printf("Insira a velocidade em m/s:\n");
    scanf("%f", &velocidadems);
    
    velocidadekm = velocidadems * 3.6;
    
    printf("a velocidade em km/h é:\n%.2f", velocidadekm);
    return 0;
}