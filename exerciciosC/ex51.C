#include <stdio.h>

int main()
{
    int i, num, produto;
    printf("Insira o numero\n");
    scanf("%d", &num);
    
    for(i = 1; i <= num/2; i++){
        produto =  i * (i + 1) * (i + 2);
        if(produto == num){
            printf("TRIANGULAR");
            return 0;
        }
        
    }
    printf("NAO E TRIANGULAR");
    return 0;
    
}