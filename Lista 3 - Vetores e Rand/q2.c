#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 16
#define LIMIT 51

int main()
{
    srand(time(NULL));
    
    int vet[TAM], somaPar = 0, qtdPares = 0;
    
    for(int i = 0; i < TAM; i++) {
        vet[i] = rand() % LIMIT;
        if(vet[i] % 2 == 0) {
            somaPar += vet[i];
            qtdPares++;
        }
    }
    
    printf("Os valores do vetor gerados aleatoriamente sao: ");
    for(int i = 0; i < TAM; i++) {
        printf("%d ", vet[i]);
    }
    
    printf("\nOs valores pares do vetor sao: ");
    for(int i = 0; i < TAM; i++) {
        if(vet[i] % 2 == 0) {
            printf("%d ", vet[i]);
        }
    }
    
    
    float mediaPar = somaPar/qtdPares;
    
    printf("\nA media dos valores pares do vetor (Soma dos pares/Qtd de pares) equivale a: %d / %d = %.2f", somaPar, qtdPares, mediaPar);
    
    return 0;
    
}

