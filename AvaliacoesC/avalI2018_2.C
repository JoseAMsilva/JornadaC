#include <stdio.h>

int main()
{
    int original, decimal, dv, soma;
    int dig1, dig2, dig3, dig4;
    
    printf("Insira o numero na base 10\n");
    scanf("%d", &original);
    
    decimal = original;
    
    dig1 = original % 7;
    original /= 7;
    dig2 = original % 7;
    original /= 7;
    dig3 = original % 7;
    original /= 7;
    dig4 = original;
    
    soma = (dig4 + dig3 + dig2 + dig1) % 7;

    dv = decimal * 10 + soma;
    
    printf("%d", dv);
    return 0;
}