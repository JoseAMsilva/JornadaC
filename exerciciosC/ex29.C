#include <stdio.h>

int main(){
    char c;
    float A, G, litro, desconto, total;
    G = 2.70;
    A = 1.90;
    
    printf("Digite g para Gasolina ou a para Álcool:\n");
    scanf("%c", & c);
    
    printf("Insira a quantide de litros:\n");
    scanf("%f", & litro);
    
    if(c == 'g'){
        if(litro <= 25){
            desconto = G - (G * 0.03);
            total = litro * desconto;
        }else{ 
            desconto = G - (G * 0.05);
            total = litro * desconto;
        }
    }
    
    if(c == 'a'){
        if(litro <= 25){
            desconto = A - (A * 0.02);
            total = litro * desconto;
        }else{
            desconto = A - (A * 0.04);
            total = litro * desconto;
        }
    }   
    
    printf("O valor a ser pago é:\nR$%.2f", total);
    
    return 0;
}