#include <stdio.h>

int main(){
    int num;
    int divisor, divisores;
    printf("insira o numero\n");
    scanf("%d", &num);
    
    divisores = 0;
    
    for(divisor = 1; divisor < num; divisor++){
        if(num % divisor == 0){
            divisores += divisor;
        }
    }

    if(divisores == num){
        printf("%d e perfeito\n", num);
    }else{
        printf("%d nao e perfeito\n", num);
    }
	return 0;
}