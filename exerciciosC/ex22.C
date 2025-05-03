//O programa recebe um numero e mostra se é par ou impar

#include <stdio.h>

int main(){
    int num;
    printf("Insira um numero:\n");
    scanf("%d", & num);
    
    switch(num % 2){//testa o resto de divisão de um numero por 2.
    
        case 0://caso for 0, logo o numero é par
            printf("o numero é par");
            break;//finaliza o bloco switch e continua o programa main.
            
        case 1://caso for 1, logo o numero é impar.
            printf("O numero é impar");
            break;
            
        default://caso não seja nenhum dos dois resultados esperados.
            printf("Numero inválido");
    }
    
    return 0;
}
