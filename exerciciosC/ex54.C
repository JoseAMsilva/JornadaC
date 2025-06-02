#include <stdio.h>

int main(){
    double S; 
	int N, i, expoente, potencia;
	S = 0.0;
   	printf("Insira o N-esimo termo da somatoria:\n");
   	scanf("%d", &N);
    
    for(i = 1; i <= N; i++){
    	potencia = 1;
    	for(expoente = 1; expoente <= i; expoente++){
    		potencia *= i;
		}
		
		S += 1.0 / potencia;
	}
	printf("%.10lf", S);
	return 0;
}