//
// Created by MarquesV on 06/03/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIMIT 101
#define TAM 50

int main () {

    int vet[TAM];

    srand(time(NULL));

    printf("O vetor original e: ");
    for(int i = 0; i < TAM; i++) {
        vet[i] = rand() % LIMIT;
        printf("%d ", vet[i]);
    }

    printf("\nO vetor que tem apenas valores divisiveis por 3 sao: ");
    for(int i = 0; i < TAM; i++) {
        if(vet[i] % 3 == 0) {
            printf("%d ", vet[i]);
        }
    }

    return 0;



}