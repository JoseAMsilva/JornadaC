//programa para receber a idade de uma pessoa em dias imprimir na tela a idade em dias, meses e anos.
#include <stdio.h>

int main(){
    int idade, dia, mes, ano;
    printf("Digite a sua idade em dias:\n");
    scanf("%d", & idade);
    ano = idade/365;
    idade %= 365;
    mes = idade / 30;
    idade %= 30;
    dia = idade;
    printf("%d anos\n%d meses\n%d dias\n", ano, mes, dia);
    
    return 0;
}