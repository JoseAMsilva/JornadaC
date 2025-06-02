#include <stdio.h>

int main(){
    int individuo, bit, gerado;
    int b0, b1, b2, b3, b4;
    
    printf("Insira o numero do individuo\n");
    scanf("%d", & individuo);
    
    printf("Digite o bit a ser modificado\n");
    scanf("%d", & bit);
    
    b0 = individuo % 2;
    individuo /= 2;
    b1 = individuo % 2;
    individuo /= 2;
    b2 = individuo % 2;
    individuo /= 2;
    b3 = individuo % 2;
    individuo /= 2;
    b4 = individuo;
    
    switch(bit){
        case 0:
            b0 = (b0 == 1) ? 0 : 1; break;
        case 1:
            b1 = (b1 == 1) ? 0 : 1; break;
        case 2:
            b2 = (b2 == 1) ? 0 : 1; break;
        case 3:
            b3 = (b3 == 1) ? 0 : 1; break;
        case 4: 
            b4 = (b4 == 1) ? 0 : 1; break;
    }
    gerado = b4 * 16 + b3 * 8 + b2 * 4 + b1 * 2 + b0;
    
    printf("NOVO GERADO: %d", gerado);
    return 0;
}