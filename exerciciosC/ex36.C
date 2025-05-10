#include <stdio.h>

int main(){
    int ano;
    printf("Insira o ano a ser verificado\n");
    scanf("%d", &ano);
    
    if((ano % 4) == 0){
        if((ano % 100) == 0){
            if((ano % 400) == 0){
                printf("BISSEXTO\n");
                return 0;
            }
            printf("NÃO É BISSEXTO\n");
            return 0;
        }
        printf("BISSEXTO\n");
        return 0;
    }else{
        printf("NÃO É BISSEXTO\n");
    }
    return 0;
}