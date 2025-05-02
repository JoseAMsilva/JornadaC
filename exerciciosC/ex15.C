// Programa que tem como entrada um numero de tres algarismos e imprime na tela o seu inverso.

#include <stdio.h>

int main(){
    int num, dig1, dig2, dig3, inverso;
    printf("insira um numero de tres digitos:\n");
    scanf("%d", & num);
    
    if(num <= 99 || num > 999){
        printf("Numero invalido");
        return 0;
    }
    
    dig1 = num / 100;
    num %= 100;
    dig2 = num / 10;
    num %= 10;
    dig3 = num;
    
    inverso = dig3 * 100 +
              dig2 * 10 +
              dig1;
    printf("O inverso do numero é:\n%d", inverso);
    
    return 0;
}