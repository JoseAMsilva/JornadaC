#include <stdio.h>

int main(){
    int inicial, senha, total;
    int dig1inc, dig2inc, dig3inc, dig1senha, dig2senha, dig3senha;
    int maior, menor, tentativas;
    int caminho1dig1, caminho2dig1, caminho1dig2, caminho2dig2, caminho1dig3, caminho2dig3;
    int menor1, menor2, menor3;
    tentativas = 10;
    
    printf("Insira o numero atual:\n");
    scanf("%d", &inicial);
    printf("Insira a senha armazenada:\n");
    scanf("%d", & senha);
    
    dig1inc = inicial / 100;
    dig2inc = (inicial / 100) % 10;
    dig3inc = inicial % 10;
    
    dig1senha = senha / 100;
    dig2senha = (senha / 100) % 10;
    dig3senha = senha % 10;
    
    maior = (dig1inc > dig1senha) ? dig1inc : dig1senha;
    menor = (dig1inc < dig1senha) ? dig1inc : dig1senha;
    
    caminho1dig1 = maior - menor;
    caminho2dig1 = tentativas - caminho1dig1;
    
    menor1 = (caminho1dig1 < caminho2dig1) ? caminho1dig1 : caminho2dig1;
    
    maior = (dig2inc > dig2senha) ? dig2inc : dig2senha;
    menor = (dig2inc < dig2senha) ? dig2inc : dig2senha;
    
    caminho1dig2 = maior - menor;
    caminho2dig2 = tentativas - caminho1dig2;
    
    menor2 = (caminho1dig2 < caminho2dig2) ? caminho1dig2 : caminho2dig2;
    
    maior = (dig3inc > dig3senha) ? dig3inc : dig3senha;
    
    menor = (dig3inc < dig3senha) ? dig3inc : dig3senha;
    
    caminho1dig3 = maior - menor;
    caminho2dig3 = tentativas - caminho1dig3;
    
    menor3 = (caminho1dig3 < caminho2dig3) ? caminho1dig3: caminho2dig3;
    
    total = menor1 + menor2 + menor3;
    
    printf("A menor quantidade de tentativas é %d", total);
    
    return 0;
}