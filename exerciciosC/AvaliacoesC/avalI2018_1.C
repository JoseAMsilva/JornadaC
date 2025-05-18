#include  <stdio.h>

int main()
{
    int num,total, b0, b1, b2, b3, b4, b5;
    
    printf("insira o numero\n");
    scanf("%d", &num);
    
    b0 = num % 2;
    num /= 2;
    b1 = num % 2;
    num /= 2;
    b2 = num % 2;
    num /= 2;
    b3 = num % 2;
    num /= 2;
    b4 = num % 2;
    num /= 2;
    b5 = num % 2;
    
    total = (b0 == 1) ? 1 : 0;
    total += (b1 == 1) ? 1 : 0;
    total += (b2 == 1) ? 1 : 0;
    total += (b3 == 1) ? 1 : 0;
    total += (b4 == 1) ? 1 : 0;
    total += (b5 == 1) ? 1 : 0;
    
    printf("numero de digitos 1: %d", total);
    return 0;
}