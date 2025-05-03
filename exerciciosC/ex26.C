#include <stdio.h>

int main(){
    float a, b, c;
    float maior, n1, n2, media;
    
    printf("insira 3 numeros:\n");
    scanf("%f %f %f", &a, &b, &c);
    
    maior = a;
    n1 = b;
    n2 = c;
    if(b > maior){
        maior = b;
        n1 = a;
        n2 = c;
    }
    
    if( c > maior){
        maior = c;
        n1 = a;
        n2 = b;
    }
    
    media = ((maior * 5.0) + (n1 * 2.5) + (n2 * 2.5))/10;
    
    printf("A média ponderada é %.2f", maior, n1, n2, media);
    
    return 0;
}