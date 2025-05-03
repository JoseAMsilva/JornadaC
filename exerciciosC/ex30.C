#include <stdio.h>

int main(){
    float passesC, passesT, Ppasses, V1;
    float jardas, V2;
    float touch, V3;
    float passesI, V4;
    float QBrating;
    
    printf("Insira o valor dos passes totais:\n");
    scanf("%f", &passesT);
    printf("insira o numero dos passes completos:\n");
    scanf("%f", &passesC);
    Ppasses = (passesC*100) / passesT;
    V1 = (Ppasses - 0.3) / 0.2;
    
    if(V1 > 2.375){
        V1 = 2.375;
    }else if(V1 < 0){
        V1 = 0;
    }
    
    printf("Insira a quantidade de jardas passadas:\n");
    scanf("%f", &jardas);
    V2 = ((jardas / passesT) - 3) / 4;
    
    if(V2 > 2.375){
        V2 = 2.375;
    }else if(V2 < 0){
        V2 = 0;
    }
    
    printf("Insira a quantidade de passes para touchdows:\n");
    scanf("%f", &touch);
    V3 = (touch / passesT) / 0.5;
    
    if(V3 > 2.375){
        V3 = 2.375;
    }else if(V3 < 0){
        V3 = 0;
    }
    
    printf("Insira o valor de passes interceptados:\n");
    scanf("%f", &passesI);
    V4 = ((passesI / passesT) - 0.095) / 0.04;
    
    if(V4 > 2.375){
        V4 = 2.375;
    }else if(V4 < 0){
        V4 = 0;
    }
    
    QBrating = ((V1 + V2 + V3 + V4) * 100) / 6;
    
    printf("O QBrating do Quarterback é de %.3f", QBrating);
    
    return 0;
}