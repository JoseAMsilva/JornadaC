#include <stdio.h>

int main(){
    float b, h;
    float area, perimetro;
    printf("Digite o valor da base:\n");
    scanf("%f", & b);
    printf("Digite o valor da altura:\n");
    scanf("%f", & h);
    area = b * h;
    perimetro = 2 * b + 2 * h;
    printf("A area do retangulo é de %f e o perimetro é de %f", area, perimetro);
    return 0;
}
