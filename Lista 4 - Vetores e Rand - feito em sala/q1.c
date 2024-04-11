// Este programa em C lê um vetor de 10 inteiros e um valor de referência e imprime os valores do vetor que são maiores que o valor de referência e a quantidade de valores que são menores que o valor de referência

#include <stdio.h>
#include <stdlib.h>
#define TAM 10


int main() {
    
    int vet[TAM], valor, count = 0;


    printf("Insira %d valores que irao compor o vetor: ", TAM);
    for(int i = 0; i < TAM; i++) {
        scanf("%d", &vet[i]);
    }
    
    printf("Insira o valor de referencia: ");
    scanf("%d", &valor);
    
    for(int i = 0; i < TAM; i++) {
        if(vet[i] > valor) {
            printf("%d ", vet[i]);
        }
        else {
            count++;
        }
    }
    
    printf("\nA qtd. de valores que sao menores que %d e: %d\n", valor, count);
    
    return 0;
    
    
    
}