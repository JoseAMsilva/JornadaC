//programa para imprimir na tela o sucessor de um inteiro.
#include <stdio.h>

int main(){
    int num;
    printf("Insira um numero\n");
    scanf("%d", & num);
    printf("O sucessor de %d é %d", num, num+1);
    return 0;
}