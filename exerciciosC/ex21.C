//Programa que recebe um numero e mostra o seu modulo.
#include <stdio.h>

int main(){
	float num, mod;
	printf("insira um numero:\n");
	scanf("%f", & num);
	
	if(num < 0){ //testador se o numero é negativo
		mod = num * -1; //caso for transforme em positivo
		printf("O modulo do numero é %.2f", mod);
		return 0;
	}else{
		mod = num;//caso não for imprima o próprio numero.
		printf("O modulo do numero é %.2f", mod);
		return 0;
	}
	
	return 0;
}