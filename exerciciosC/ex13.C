//Programa que tem como entrada um circuito com duas resistencias em paralelo e uma em serie e imprime na tela a resistencia equivalente.

#include <stdio.h>

int main(){
    float r1, r2, r3, totalr;
    printf("Insira o valor das resistencias em paralelo:\n");
    scanf("%f %f", & r1, &  r2);
    
    printf("Insira o valor da resistencia em série:\n");
    scanf("%f", & r3);
    
    totalr = ((r1 * r2) / (r1 + r2)) + r3;
    
    printf("Resistencia equivalente:\n%.2f", totalr);
    
    return 0;
}