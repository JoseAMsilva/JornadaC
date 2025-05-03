//O programa recebe o numero do mês e mostra a quantidade de dias.

#include <stdio.h>

int main(){
    int mes, dia;
    printf("Insira o numero do mês:\n");
    scanf("%d", & mes);
     
     if(mes < 0 || mes > 12){
         printf("Numero inválido.");
         return 0;
    }else{
        if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
            dia = 30;
        }else if(mes == 2){
            dia = 28;
        }else{
            dia = 31;
        }
    }
    printf("O mês %d tem %d dias", mes, dia);
    
    return 0;
}