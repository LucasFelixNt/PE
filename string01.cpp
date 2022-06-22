#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){

	//[5] 4 posicoes uteis + 1 terminador
	
	char nomeCliente[] = "Lucas Felix";
	int i;
	int cont = 0;
	
	//char nomeCliente[2] = '\0'; ex: Terminador
	
	for (i = 0; nomeCliente[i] != '\0'; i++)
	{
		printf("Valor do elemento %d da string = %c \n", i, nomeCliente[i]);
		cont++;
	}
	
	printf("\nQuantidade de caracteres da string: %d \n", cont);
	
	printf("Quantidade de caracteres utilizando strlen: %d \n", strlen(nomeCliente));
	
}
