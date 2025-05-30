#include <stdio.h>

int main()
{
    int N, i, ant, antant, atual;
    
    printf("Insira o N-esimo termo:\n");
    scanf("%d", &N);
    
    antant = 0;
    ant = 1;
    atual = 0;
    
    for(i = 0; i < N; i++){
    	antant = ant;
    	ant = atual;
    	atual = antant + ant;
    	
    	printf("%d ", atual);
	}
    return 0;
}