#include <stdio.h>

int main(){
    float area, desconto, total;
    int tipo;
    printf("Insira o tipo de pulverização:\n");
    scanf("%d", & tipo);
    printf("Insira a area a ser pulverizada:\n");
    scanf("%f", &area);
    switch(tipo){
        case 1:
            total = area * 50;
            if(area > 1000){
                desconto = total * 0.05;
                total -= desconto;
            }
            if(total > 750.0){
                total -= 750.0;
                desconto = total * 0.1;
                total -= desconto;
            }
            printf("O valor a ser pago é R$%.2f\n", total);
            break;
        case 2:
            total = area * 100.0;
            if(area > 1000){
                desconto = total * 0.05;
                total -= desconto;
            }
            if(total > 750.0){
                total -= 750.0;
                desconto = total * 0.1;
                total -= desconto;
            }
            printf("O valor a ser pago é R$%.2f\n", total);
            break;
        case 3:
            total = area * 150.0;
            if(area > 1000){
                desconto = total * 0.05;
                total -= desconto;
            }
            if(total > 750.0){
                total -= 750.0;
                desconto = total * 0.1;
                total -= desconto;
            }
            printf("O valor a ser pago é R$%.2f\n", total);
            break;
        case 4:
            total = area * 250.0;
            if(area > 1000){
                desconto = total * 0.05;
                total -= desconto;
            }
            if(total > 750.0){
                total -= 750.0;
                desconto = total * 0.1;
                total -= desconto;
            }
            printf("O valor a ser pago é R$%.2f\n", total);
            break;
        default:
            printf("Valor não reconhecido\n");
    }
    return 0;
}