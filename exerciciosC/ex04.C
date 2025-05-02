#include <stdio.h>

int main(){
    float l1, l2, l3;
    float perimetro;
    printf("Insira o valor dos tres lados de um triangulo:\n");
    scanf("%f %f %f", &l1, &l2, &l3);
    perimetro = l1 + l2 + l3;
    printf("O perimetro é de %.2f", perimetro);
    
    return 0;
}