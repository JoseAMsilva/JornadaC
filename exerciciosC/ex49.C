#include <stdio.h>

int main(){
	int termo1, termo2, ultitermo;
	int i, sequencia;

	printf("Informe o primeiro:\n");
	scanf("%d", &termo1);
	
	printf("Insira o segundo termo:\n");
	scanf("%d", &termo2);
	
	printf("Informe o ultimo termo:\n");
	scanf("%d", &ultitermo);
	
	printf("%d ", termo1);
	
	printf("%d ", termo2);
	
	for(i = 3; i <= ultitermo; i++){
		if(i % 2 == 1){
			sequencia = termo2 + termo1;
		}else{
			sequencia = termo2 - termo1;
		}

		printf("%d ", sequencia);
		termo1 = termo2;
		termo2 = sequencia;
	}
	
	return 0;
}