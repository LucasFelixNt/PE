#include <stdio.h>
#include <stdlib.h>

int main(){

	float notas[4], totalNotas, mediaNotas;
	int i;
	

	for (i = 0; i < 4; i++){

		printf("Informe sua Nota: \n");
		scanf("%f", &notas[i]);

		totalNotas = totalNotas + notas[i];

	}

	mediaNotas = totalNotas / 4;

	printf("\nA Media das Notas e: %.2f\n", mediaNotas);

	if(mediaNotas >= 7.0){

      printf("\nAluno aprovado!");
      
    }

    else if(mediaNotas > 3.0 && mediaNotas < 7.0){

        printf("\nAluno em Recuperacao!");

    }

    else if(mediaNotas <=3.0 ){
    
        printf("\nAluno Reprovado");
       
    }

    return 0;

}