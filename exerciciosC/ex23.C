//O programa recebe três numeros e mostra o maior deles.

#include <stdio.h>

int main(){
    int a, b, c, maior;
    printf("Insira os numeros:\n");
    scanf("%d %d %d", &a, &b, &c);
    
    maior = a;//define a como maior.
    
    if(b > maior){//se caso b for maior que a, ele será o maior.
        maior = b;
    }
    
    if(c > maior){//se caso c for maior que o valor definido do maior, ele será o novo maior.
        maior = c;
    }
    
    printf("O maior é: %d", maior);
}