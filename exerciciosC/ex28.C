#include <stdio.h>

int main(){
    float salario, desconto;
    
    printf("Digite o valor do salário:\nR$");
    scanf("%f", &salario);
    
    desconto = salario * 0.11;
    if(desconto > 334.29){
        desconto = 334.29;
    }
    
    printf("O desconto foi de R$%.2f", desconto);
    
    return 0;
}