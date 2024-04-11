//
// Created by MarquesV on 07/03/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 15
#define LIMIT 21

int main() {

    srand(time(NULL));

    int vetA[TAM], vetB[TAM], vetC[TAM];
    int qtdInterseccoes = 0;

    printf("Os dois vetores gerados aleatoriamente sao: \n");


    for(int i = 0; i < TAM; i++) {
        vetA[i] = rand() % LIMIT;
        vetB[i] = rand() % LIMIT;
    }

    printf("Vetor A: ");
    for(int i = 0; i < TAM; i++) {
        printf("%d ", vetA[i]);
    }

    printf("\nVetor B: ");
    for(int i = 0; i < TAM; i++) {
        printf("%d ", vetB[i]);
    }

    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            if(vetA[i] == vetB[j]) {
                vetC[qtdInterseccoes] = vetA[i];
                qtdInterseccoes++;
            }
        }
    }

    printf("\nO vetor C que e a interseccao dos valores repetidos no vetor A e B e: ");

    for(int i = 0; i < qtdInterseccoes; i++) {
        printf("%d ", vetC[i]);
    }



}