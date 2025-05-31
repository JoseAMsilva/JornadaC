#include <stdio.h>

int main(){
    int divisorA, divisoresA;
    int divisorB, divisoresB;
    int numA, numB;
    printf("insira o numero A\n");
    scanf("%d", &numA);
    
    printf("insira o numero B\n");
    scanf("%d", &numB);
    
    divisoresA = 0;
    divisoresB = 0;
    
    for(divisorA = 1; divisorA < numA; divisorA++){
        if(numA % divisorA == 0){
            divisoresA += divisorA;
        }
    }
    for(divisorB = 1; divisorB < numB; divisorB++){
        if(numB % divisorB == 0){
            divisoresB += divisorB;
        }
    }
    if(divisoresB == numA && divisoresA == numB){
        printf("Sao amigos\n");
    }else{
        printf("Nao sao amigos\n");
    }
    return 0;
}