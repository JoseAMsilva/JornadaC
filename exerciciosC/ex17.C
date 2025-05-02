// Programa que tem como entrada dois números inteiros e permute esses valores.

#include <stdio.h>

int main(){
    int a, b, i;
    printf("Inira o valor de A:\n");
    scanf("%d", & a);
    
    printf("insira o valor de B:\n");
    scanf("%d", & b);
    
    i = a;
    a = b;
    b = i;
    
    printf("A: %d\nB: %d", a, b);
    
    return 0;
}