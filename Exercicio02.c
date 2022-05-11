#include <stdio.h>

int main() {
    
    int vetorMax, i;

    printf("Qual deve ser a quantidade de elementos do vetor?: ");
    scanf("%d", &vetorMax);

    int vetor[vetorMax];

    printf("\nDigite os valores para esse vetor:\n");

    for (i = 0; i < vetorMax; i++){
        
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Os Valores digitados foram: ");

    for (i = 0; i < vetorMax; i++){
        
        printf("%d ", vetor[i]);
    }

    return 0;
}
