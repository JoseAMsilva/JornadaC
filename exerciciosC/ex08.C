//programa para receber o raio e a altura de uma lata e imprimir na tela o seu volume.
#include <stdio.h>

int main(){
    float r, h, pi;
    float volume;
    printf("Insira o valor do volume e da altura da lata:\n");
    scanf("%f %f", & r, & h);
    pi = 3.14159;
    volume = pi * (r * r) * h;
    printf("O valor do volume é de %.2f", volume);
    
    return 0;
}