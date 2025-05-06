#include <stdio.h>

int main(){
    int num;
    printf("Insira um numero de 1 a 7\n:>");
    scanf("%d", & num);
    
    switch(num){
        case 1:
            printf("DOMINGO\n");
            break;
        case 2:
            printf("SEGUNDA-FEIRA\n");
            break;
        case 3:
            printf("TERÇA-FEIRA\n");
            break;
        case 4:
            printf("QUARTA-FEIRA\n");
            break;
        case 5: 
            printf("QUINTA-FIERA\n");
            break;
        case 6:
            printf("SEXTA-FEIRA\n");
            break;
        case 7:
            printf("SÁBADO\n");
            break;
        default:
            printf("ERRO!\n");
    }
    return 0;
}