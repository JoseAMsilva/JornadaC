#include <stdio.h>

int main(){
    int cartao, hora;
    int dig1, dig2, dig3, dig4, H1, H2, M1, M2;
    int maior1, maior2, maior3, maior4, menor1, menor2, menor3, menor4;
    int codigo, cod1, cod2, cod3, cod4, inverso;
    
    printf("Insira o numero do cartão\n");
    scanf("%d", &cartao);
    
    printf("Insira a hora da transação\n");
    scanf("%d", &hora);
    
    dig1 = cartao / 1000;
    dig2 = cartao / 100 % 10;
    dig3 = cartao / 10 % 10;
    dig4 = cartao % 10;
    
    H1 = hora / 1000;
    H2 = hora / 100 % 10;
    M1 = hora / 10 % 10;
    M2 = hora % 10;

    maior1 = (dig1 >= H1) ? dig1 * 1000 : H1 * 1000;
    menor1 = (dig1 >= H1) ? H1 * 1000: dig1 * 1000;
    maior2 = (dig2 >= H2) ? dig2 * 100: H2 * 100;
    menor2 = (dig2 >= H2) ? H2 * 100 : dig2 * 100;
    maior3 = (dig3 >= M1) ? dig3 * 10 : M1 * 10;
    menor3 = (dig3 >= M1) ? M1 * 10 : dig3 * 10;
    maior4 = (dig4 >= M2) ? dig4 : M2;
    menor4 = (dig4 >= M2) ? M2 : dig4;
    
    codigo = (maior1 + maior2 + maior3 + maior4) - (menor1 + menor2 + menor3 + menor4);
    
    cod1 = codigo / 1000;
    cod2 = codigo / 100 % 10;
    cod3 = codigo / 10 % 10;
    cod4 = codigo % 10;
    
    inverso = cod4 * 1000 +
              cod3 * 100 +
              cod2 * 10 +
              cod1;
    
    printf("%d", inverso);
    return 0;
}