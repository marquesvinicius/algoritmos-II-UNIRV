#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100
#define LIMIT 501

int main()
{
    srand(time(NULL));
    
    int vet[TAM];
    int posicaoInicial = 49;
    int posicaoFinal = 99;
    
    for(int i = 0; i < TAM; i++) {
        vet[i] = rand() % LIMIT;
    }
    
    //Imprimir o vetor;
    printf("O vetor gerado aleatoriamente e: ");
    for(int i = 0; i < TAM; i++) {
        printf("%d ", vet[i]);
    }
    
    //Imprimir entre as posicoes citadas no exercicio 
    //(50 a 100, ou seja, indice 49 a indice 99, ja que nao existe indice 100 num vetor)
    printf("\n\nO vetor entre a posicao %d e a posicao %d e: ", posicaoInicial + 1, posicaoFinal + 1);
    for(int i = posicaoInicial; i <= posicaoFinal; i++) {
        printf("%d ", vet[i]);
    }
    

    return 0;
    
}

