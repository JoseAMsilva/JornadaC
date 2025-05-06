#include <stdio.h>

int main(){
    char c;
    
    printf("Digite um caractere:\n:>");
    scanf("%c", &c);
    
    if(c >= 0 && c <= 127){
        if(c >= 48 && c <= 57){
            printf("NUMERO\n");
            return 0;
        }else if(c >= 65 && c <= 90 || c >= 97 && c <= 122){
            if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U'){
                printf("VOGAL\n");
                return 0;
            }else{
                printf("CONSOANTE\n");
                return 0;
            }
        }else{
            printf("SIMBOLO\n");
            return 0;
        }
    }
    return 0;
}