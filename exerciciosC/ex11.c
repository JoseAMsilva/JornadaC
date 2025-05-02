//Programa que tem como entrada as notas bimestrais de um aluno e imprime na tela a média semestral.

#include <stdio.h>

int main(){
    float nota1b1, nota2b1, nota1b2, nota2b2, mediab1, mediab2, media;
    printf("Insira as duas notas do primeiro Bimestre:\n");
    scanf("%f %f", & nota1b1,  & nota2b1);
    printf("Insira as duas notas do segundo Bimestre:\n");
    scanf("%f %f", & nota1b2, & nota2b2);
    mediab1 = (nota1b1 + nota2b1) / 2;
    mediab2 = (nota1b2 + nota2b2) / 2;
    media = (mediab1 + mediab2) / 2;
    printf("A media semestral é:\n%.2f", media);
    return 0;
}