//programa para receber um numero menor que 32 e imprimir na tela o correspondente em binario.
#include <stdio.h>

int main(){
    int num, dig0, dig1, dig2, dig3, dig4;
    int binario;
    printf("Insira um numero menor que 32:\n");
    scanf("%d", & num);
    if(num > 31){
        printf("numero não reconhecido");
        return 0;
    }
    
    dig0 = num % 2;
    num /= 2;
    dig1 = num % 2;
    num /= 2;
    dig2 = num % 2;
    num /= 2;
    dig3 = num % 2; 
    num /= 2;
    dig4 = num;
    
    binario = dig4 * 10000 +
              dig3 * 1000 +
              dig2 * 100 +
              dig1 * 10 + 
              dig0;
              
    printf("%05d", binario);
    return 0;
}