#include <stdio.h>

int main(){
    
    int trits, decimal;
    int dig1, dig2, dig3, dig4;
    
    printf("Insira um valor em trits (0, 1, 2) de até quatro digitos:\n");
    scanf("%d", &trits);
    
    dig1 = trits / 1000;
    dig2 = (trits / 100) % 10;
    dig3 = (trits / 10) % 10;
    dig4 = trits % 10;
    
    if(dig1 == 2)
        dig1 = 27;
    else if(dig1 == 1)
        dig1 = 0;
    else if(dig1 == 0)
        dig1 = 0;
    
    if(dig2 == 2)
        dig2 = 9;
    else if(dig2 == 1)
        dig2 = 0;
    else if(dig2 == 0 && dig1 == 0)
        dig2 = 0;
    else if(dig2 == 0 && dig1 != 0)
        dig2 = -9;
        
    if(dig3 == 2)
        dig3 = 3;
    else if(dig3 == 1)
        dig3 = 0;
    else if(dig3 == 0 && dig2 == 0 && dig1 == 0)
        dig3 = 0;
    else if(dig3 == 0 && (dig2 != 0 || dig1 != 0))
        dig3 = -3;
        
    if(dig4 == 2)
        dig4 = 1;
    else if(dig4 == 1)
        dig4 = 0;
    else if(dig3 == 0 && dig2 == 0 && dig1 == 0)
        dig4 = 0;
    else if(dig4 == 0)
        dig4 = -1;
        
    decimal = dig1 + dig2 + dig3 + dig4;
    
    printf("O número %d em decimal é:\n%d", trits, decimal);

    return 0;
}
