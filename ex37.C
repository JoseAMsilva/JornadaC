#include <stdio.h>

int main(){
    int num;
    int dig1, dig2, dig3, dig4;
    int dv;
    
    printf("Insira os 4 primeiros digitos da empresa:\n");
    scanf("%d", & num);
    
    dig1 = num / 1000;
    dig2 = (num / 100) % 10;
    dig3 = (num / 10) % 10;
    dig4 = num % 10;
    
    dv = (dig1 * 5) + (dig2 * 4) + (dig3 * 3) + (dig4 * 2);
    dv = 11 - (dv % 11);
    
    if(dv == 10){
        char DVx;
        DVx = 'X';
        printf("numero %c dv.\n", DVx);
        return 0;
    }
    printf("numero %d dv.\n", dv);
    
    return 0;
}