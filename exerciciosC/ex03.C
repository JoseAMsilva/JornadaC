#include <stdio.h>

int main()
{
    float r, pi;
    float area, perimetro;
    printf("Insira o valor do raio:\n");
    scanf("%f", & r);
    pi = 3.14159;
    area = pi * (r * r);
    perimetro = (2 * pi) * r;
    printf("A area é de %.2f e o perimetro é de %.2f", area, perimetro);
    
    return 0;
}
