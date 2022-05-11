#include <stdio.h>
#include <stdlib.h>


int main(void){
	
	int v[10], b[10];
	int i;
	
	for (i = 0; i < 10; i ++){
		
		printf("%d - Digite os dados para o vetor A: ", i);
		scanf("%d", &v[i]);
		
	}
	
	printf("Saida de dados do vetor: \n");
	for (i = 0; i < 10; i++){
		
		printf("V [%d] = %d \n", i, v[i]);
			
	}
	
	printf("Saida vetor B");
	for(i = 0; i < 10; i++){
		
		b[i] = v [i] * 10;
		printf("b[%d] = %d \n", i, b[i]);
		
	}
	
	return 0;
	
	
}
