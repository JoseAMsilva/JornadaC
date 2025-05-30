#include <stdio.h>

int main(){
	int numero, divisor, divisores;
	divisores = 0;
	printf("Insira o numero\n");
	scanf("%d", &numero);
	
	for(divisor = 1; divisor <= numero; divisor++){
		divisores += (numero % divisor == 0) ? 1 : 0;
	}
	
	if(divisores == 2){
		printf("E PRIMO\n");
	}else{
		printf("NAO E PRIMO");
	}
		
	return 0;
}