#include <stdio.h>

int main()
{
    int numero, parcela1, parcela2;
    
    printf("Insira o numero\n");
    scanf("%d", &numero);
    
    for(parcela1 = 1; parcela1 <= numero; parcela1++){
        for(parcela2 = 1; parcela2 <= numero; parcela2++){
            if(parcela1 + parcela2 == numero){
                printf("%d : %d\n",parcela1, parcela2);
            }
        }
    }   
    return 0;
}