#include <stdio.h>

int main(){
	int N, icont;
	long fatorial = 1;
	double euler = 1;
	
	printf("Insira o N-esimo termo:\n");
	scanf("%d", &N);
	
	for(icont = 1; icont <= N; icont++){
		fatorial *= icont;
		euler += 1.0 / fatorial;
		
		printf("%d) %lf\n", icont, euler);
	}
	
	return 0;
}