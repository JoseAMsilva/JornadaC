#include <stdio.h>

int main(){
    int overflow, num, total;
    int dig1, dig2, dig3, dig4, dig5, dig6, dig7;
    int parte1, parte2, operador;
    
    printf("Insira o inteiro maximo que o computador pode armazenar:\n");
    scanf("%d", & overflow);
    
    printf("Insira o numero da operção:\n");
    scanf("%d", &num);
    
    dig7 = num / 1000000;
    dig6 = (num / 100000) % 10;
    dig5 = (num / 10000) % 10;
    dig4 = (num / 1000) % 10;
    dig3 = (num / 100) % 10;
    dig2 = (num / 10) % 10;
    dig1 = num % 10;
    
    operador = dig4;
    
    parte1 = dig7 * 100 +
             dig6 * 10 +
             dig5;
             
    parte2 = dig3 * 100 +
             dig2 * 10 +
             dig1;
             
    switch(operador){
        case 1:
            total = parte1 + parte2;
            break;
        case 2:
            total = parte1 - parte2;
            break;
        case 3: 
            total = parte1 * parte2;
            break;
        case 4:
            total = parte1 / parte2;
            break;
    }
    if(total > overflow){
        printf("OVERFLOW\n");
        return 0;
    }
    
    printf("RESULTADO: %d\n", total);
    
    return 0;
}