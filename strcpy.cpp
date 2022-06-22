#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
	
	char nome1[15];
	char nome2[15];
	
	printf("Digite o Nome: ");	
	fgets(nome1, 14, stdin);
	
	printf("\nNome 1: %s", nome1);
	
	strcpy(nome2, nome1, 3); // Apenas caracteres desejados
	
	printf("\nNome 2 = %s", nome2);

}
	
	
