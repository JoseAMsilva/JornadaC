//programa para imprimir na tela o quociente e o resto da divisão de dois numeros.
#include <stdio.h>

int main(){
    int n1, n2;
    int quo, rest;
    printf("Insira os numeros:\n");
    scanf("%d %d", &n1, &n2);
    quo = n1 / n2;
    rest = n1 % n2;
    printf("O quociente é %d e o resto é %d", quo, rest);
    
    return 0;
}