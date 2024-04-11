//
// Created by MarquesV on 07/03/2024.
//

#include <stdio.h>
#include <time.h>
#define TAM 50
#define LIMIT 501


int main() {

    srand(time(NULL));

    int vet[TAM];

    for(int i = 0; i < TAM; i++) {
        vet[i] = rand() % LIMIT;
    }

    printf("\na) Os valores gerados aleatoriamente sao: ");
    for(int i = 0; i < TAM; i++) {
        printf("%d ", vet[i]);
    }

    printf("\nb) Os valores do vetor que estao no intervalo 20-40: ");
    for(int i = 0; i < TAM; i++) {
        if(vet[i] > 20 && vet[i] < 40) {
            printf("%d ", vet[i]);
        }
    }

    printf("\nc) Os valores impares do vetor que estao no intervalo 100-300: ");
    for(int i = 0; i < TAM; i++) {
        if(vet[i] % 2 != 0 && vet[i] > 100 && vet[i] < 300) {
            printf("%d ", vet[i]);
        }
    }

    return 0;
}