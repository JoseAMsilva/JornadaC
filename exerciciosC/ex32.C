#include <stdio.h>
 
int main(){
    float x, y;
    
    printf("Insira o valor para o eixo X e para o eixo Y\n:>");
    scanf("%f %f", &x, &y);
    
    if(x > 0 && y > 0){
        printf("QUADRANTE I\n");
        return 0;
    }else if(x < 0 && y > 0){
        printf("QUADRANTE II\n");
        return 0;
    }else if(x < 0 && y < 0){
        printf("QUADRANTE III\n");
        return 0;
    }else if(x > 0 && y < 0){
        printf("QUADRANTE IV\n");
        return 0;
    }
    
    if(x == 0 && y > 0 || y < 0){
        printf("ESTA SOB O PONTO X\n");
        return 0;
    }else if(y == 0 && x > 0 || x < 0){
        printf("ESTA SOB O PONTO Y\n");
        return 0;
    }else if(x == 0 && y == 0){
        printf("ESTA NA ORIGEM\n");
        return 0;
    }
    
    return 0;
}