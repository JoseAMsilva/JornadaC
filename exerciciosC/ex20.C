/* Programa que recebe um numero e indica se ele é positivo ou negativo.*/

#include <stdio.h>

int main(){
    int num;
    printf("Insira um numero:\n");
    scanf("%d", & num);
    
    if(num < 0){
        printf("%d é NEGATIVO", num);
    }else{
        printf("%d é POSITIVO", num);
    }
    
    return 0;
}