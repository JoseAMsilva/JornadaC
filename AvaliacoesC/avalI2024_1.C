#include <stdio.h>

int main(){
    int distancia, emissor;
    int sensor;
    
    printf("Insira a distancia total:\n");
    scanf("%d", &distancia);
    
    sensor = ((distancia - 3) % 8) - 2;
    
    printf("A particula sairá no sensor %d", sensor);
    
    return 0;
}