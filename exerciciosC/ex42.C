#include <stdio.h>

int main(){
	int i, soma;
	soma = 0;
	
	for(i = 1; i <= 100; i++){
		soma += i;
		printf("%d ", i);
		}
		
	printf("\n");	
	printf("a soma e %d", soma);
	return 0;
}