#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

	int vetor[10], i, totalIdades, mediaIdades, maiores = 0;

	for(i = 0; i < 10; i++){

	printf("Informe as Idades: \n");
	scanf("%d", &vetor[i]);

	totalIdades += vetor[i];

	if (vetor[i] >= 18){

		maiores ++;

	}

	}

	mediaIdades = totalIdades / 10;
	printf("\nMedia de Idades: %d \n", mediaIdades);


	printf("Posicao de Idades: ");
	for (i = 0; i < 10; i++)
	{
		printf("Idade[%d] = %d \n", i, vetor[i]);
	}

	return(0);
	
}
