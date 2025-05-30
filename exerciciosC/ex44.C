#include <stdio.h>

int main(){
	int i, A, B, divisao, quociente;
	quociente = 0;
	
	printf("Insira o numero A:\n");
	scanf("%d", &A);
	
	printf("Insira o numero B:\n");
	scanf("%d", &B);
	
	while(A >= B){
		divisao = A - B;
		A = divisao;
		quociente++;
		}
	printf("\n");
	printf("o resultado e %d", quociente);
		
	return 0;
}