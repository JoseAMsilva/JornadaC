// Programa que tem como entrada a altura de uma pessoa, a da sua sombra e a sombra de um predio e imprime na tela o valor da altura do prédio.
#include <stdio.h>

int main(){
    float sombrap, sombra, altp, alt;
    
    printf("Insira a sua altura:\n");
    scanf("%f", & alt);
    
    printf("Insira a medida da sua sombra:\n");
    scanf("%f", & sombra);
    
    printf("Insira a sombra do prédio:\n");
    scanf("%f", & sombrap);
    
    altp = (alt * sombrap) / sombra;
    
    printf("A altura do prédio é de:\n%.2f", altp);
    
    return 0;
}