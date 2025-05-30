#include <stdio.h>

int main(){
	int i, A, B, resto;
	
	printf("Insira o numero A:\n");
	scanf("%d", &A);
	
	printf("Insira o numero B:\n");
	scanf("%d", &B);
	
	while(A >= B){
		resto = A - B;
		A = resto;
		}
	printf("\n");
	printf("o resto da divisao e %d", resto);
		
	return 0;
}