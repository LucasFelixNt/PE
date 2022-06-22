#include <stdio.h>
#include <stdlib.h>


int soma10(int x)
{
	x = x + 10;
	printf("Novo valor de X = %d \n", x);
	return (x);
	
}

int soma10p(int *x)
{
	*x = *x + 10;
	printf("Novo valor de X = %d \n", *x);
	return (x);
	
}

int main(void){
	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	printf("\nNumero: %d \n", numero)
	
	
	soma10(numero); //funcao
	
	printf("Agora o numero vale: %d \n", numero);
	
	soma10p(&numero); //funcao
	
	printf("Agora o numero vale: %d \n", numero)
	
	
	
	return;
	
	
}
