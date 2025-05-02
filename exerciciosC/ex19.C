/* Programa que recebe o valor de um produto e mostra o preço da entrada e das parcelas entretanto ovalor da entrada deve
ser maior ou igual as parcelas e deve facilitar para que as duas parcelas sejam iguais.*/

#include <stdio.h>

int main(){
    float total, entrada;
    int parcela;
    printf("Insira o valor das parcelas:\nR$");
    scanf("%f", & total);
    
    parcela = total/3;
    
    entrada = total - parcela*2;
    
    printf("Entrada:\nR$%.2f\nParcela 1:\nR$%d\nParcela 2:\nR$%d", entrada, parcela, parcela);
    
    return 0;
}