//
// Created by MarquesV on 10/04/2024.
//

/*
 * 4) Faça um algoritmo que preencha um vetor com 10 posições
    automaticamente, em seguida faça um procedimento que retorne os
    valores invertido. Imprimir o vetor original e o vetor invertido.
 *
 * */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define LIMIT 11

void imprimeVetor (int vet[]) {
    for(int i = 0; i < 10; i++)
        printf("%d ", vet[i]);
    printf("\n");
}

void inverteVetor(int vet[]) {
    for(int i = TAM; i >= 0; i--)
        printf("%d ", vet[i]);
    printf("\n");
}


int main() {

    srand(time(NULL));

    int vet[TAM];

    for(int i = 0; i < TAM; i++){
        vet[i] = rand() % LIMIT;
    }

    printf("O vetor original e: ");
    imprimeVetor(vet);

    printf("O vetor invertido e: ");
    inverteVetor(vet);

    return 0;
}