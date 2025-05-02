// Programa que encontra as raízes de uma equação de primeiro grau.

#include <stdio.h>

int main(){
    float a, b, x;
    printf("Uma equação de primeiro grau tem o formato aX + b = 0\n");
    
    printf("Insira o valor de A e de B:\n");
    scanf("%f %f", & a, & b);
    
    x = -(b) / a;
    
    printf("X = %.2f", x);
    
    return 0;
}