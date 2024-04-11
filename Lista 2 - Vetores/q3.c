#include <stdio.h>
#define TAM 6

int main() {
    
    int vet[TAM], maior, menor, indiceMaior, indiceMenor;
    
    printf("Digite %d valores para a construcao do vetor:\n", TAM);
    for(int i = 0; i < TAM; i++) {
        scanf("%d", &vet[i]);
    }
    
    maior = vet[0];
    menor = vet[0];
    indiceMaior = 0;
    indiceMenor = 0;
    
    for(int i = 0; i < TAM; i++) {
        if(vet[i] > maior) {
            maior = vet[i];
            indiceMaior = i;
        }
        
        if (vet [i] < menor) {
            menor = vet[i];
            indiceMenor = i;
        }
    }
    
    printf("O MAIOR valor do vetor eh %d e esta na %da posicao (indice %d)\n", maior, indiceMaior + 1, indiceMaior);
    printf("O MENOR valor do vetor eh %d e esta na %da posicao (indice %d)\n", menor, indiceMenor + 1, indiceMenor);
    
    return 0;
}

