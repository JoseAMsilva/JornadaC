#include <stdio.h>

int main(){
    float renda, emprestimo, prestacao;
    printf("Insira a sua renda mensal:\n:>R$");
    scanf("%f", & renda);
    
    printf("Insira o Valor do emprestimo solicitado\n:>R$");
    scanf("%f", & emprestimo);
    
    printf("Insira a quantidade de prestaçoes:\n:>");
    scanf("%f", & prestacao);
    
    prestacao = renda / prestacao;
    
    if(prestacao > (renda * 0.3) || emprestimo > (10 * renda)){
        printf("NÃO CONCEDIDO\n");
        return 0;
    }else{
        printf("CONCEDIDO\n");
    }
    return 0;
}