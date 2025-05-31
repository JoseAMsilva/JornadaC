#include <stdio.h>

int main()
{
    double populacaoA, populacaoB, taxaA, taxaB;
    int ano;
    populacaoA = 5000000;
    populacaoB = 7000000;
    taxaA = 0.03;
    taxaB = 0.02;
    
    ano = 0;
    
    while(populacaoA <= populacaoB){
        populacaoA += populacaoA * taxaA;
        populacaoB += populacaoB * taxaB;
        ano++;
    }
    
    printf("%d anos", ano);
    return 0;
}