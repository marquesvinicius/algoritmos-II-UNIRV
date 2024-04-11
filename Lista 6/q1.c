//
// Created by MarquesV on 08/03/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define LIMIT 51


int main () {

    srand(time(NULL));

    int vetA[TAM], vetB[TAM];

    for(int i = 0; i < TAM; i++) {
        vetA[i] = rand() % LIMIT;
    }

    printf("O vetor original e: ");
    for(int i = 0; i < TAM; i++) {
        printf("%d ", vetA[i]);
    }

    for(int i = 0; i < TAM; i++) {
        if(i % 2 == 0) {
            vetB[i] = vetA[i] / 2;
        }

        else {
            vetB[i] = vetA[i] * 3;
        }
    }

    printf("\nO vetAor modificado e: ");
    for(int i = 0; i < TAM; i++) {
        printf("%d ", vetB[i]);
    }

    return 0;
}