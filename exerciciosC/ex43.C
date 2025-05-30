#include <stdio.h>

int main(){
	int i, num, soma, media, divisor;
	soma = 0;
	divisor = 0;
	for(i = 1; i <= 5; i++){
		printf("Insira um numero:\n");
		scanf("%d", &num);
		soma += num;
		divisor++;
		}
	printf("\n");
	media = soma/divisor;
	printf("a media e %d", media);
		
	return 0;
}