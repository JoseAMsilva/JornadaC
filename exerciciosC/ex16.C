#include <stdio.h>

int main(){
    int dinheiro, nota100, nota50, nota20, nota10, nota5, nota2, nota1;
    printf("Insira o valor do saque:\nR$");
    scanf("%d", & dinheiro);
    
    nota100 = dinheiro / 100;
    dinheiro %= 100;
    nota50 = dinheiro / 50;
    dinheiro %= 50;
    nota20 = dinheiro / 20;
    dinheiro %= 20;
    nota10 = dinheiro / 10;
    dinheiro %= 10;
    nota5 = dinheiro / 5;
    dinheiro %= 5;
    nota2 = dinheiro / 2;
    dinheiro %= 2;
    nota1 = dinheiro;
    
    printf("O saque é de:\n%d notas de 100\n%d notas de 50\n%d notas de 20\n%d notas de 10\n%d notas de 5\n%d notas de 2\n%d notas de 1",nota100, nota50, nota20, nota10, nota5, nota2, nota1);
    
    return 0;
}