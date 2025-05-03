#include <stdio.h>

int main(){
    char c;
    
    printf("Digite uma letra:\n");
    scanf("%c", &c);
    
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        printf("%c é uma vogal", c);
        return 0;
    }else{
        printf("%c é uma consoante", c);
        return 0;
    }
    
    return 0;
}
