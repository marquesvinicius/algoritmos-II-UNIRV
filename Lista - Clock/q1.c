//
// Created by MarquesV on 15/05/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5000
#define LIMIT 5000

void preencheVetorAleatorio(int vet[TAM]) {
    for(int i = 0; i < TAM; i++){
        vet[i] = rand() % LIMIT;
    }
}

void imprimeVetor(int vet[TAM]) {
    for(int i = 0; i < TAM; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int bubbleSort(int vet[TAM]) {
    int temp, contador = 0;
    for(int i = 0; i < TAM - 1; i++) {
        for(int j = 0; j < TAM - i - 1; j++) {
            contador++;
            if(vet[j] > vet[j + 1]) {
                temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }
    return contador;
}

int insertionSort(int vet[TAM]) {
    int i, chave, j, contador = 0;
    for(i = 1; i < TAM; i++) {
        chave = vet[i];
        j = i - 1;
        while(j >= 0 && vet[j] > chave) {
            vet[j + 1] = vet[j];
            j = j - 1;
            contador++;
        }
        vet[j + 1] = chave;
    }
    return contador;
}

int selectionSort(int vet[TAM]) {
    int i, j, min_idx, temp, contador = 0;
    for(i = 0; i < TAM - 1; i++) {
        min_idx = i;
        for(j = i + 1; j < TAM; j++) {
            contador++;
            if(vet[j] < vet[min_idx]) {
                min_idx = j;
            }
        }
        temp = vet[min_idx];
        vet[min_idx] = vet[i];
        vet[i] = temp;
    }
    return contador;
}


int main() {
    srand(time(NULL));
    int vetA[TAM], vetB[TAM], vetC[TAM];
    clock_t start, end;
    double tempo_utilizadoA, tempo_utilizadoB, tempo_utilizadoC;

    preencheVetorAleatorio(vetA);

    printf("O vetor desordenado e: ");
    imprimeVetor(vetA);
    printf("\n\n\n");

    for(int i = 0; i < TAM; i++) {
        vetB[i] = vetA[i];
        vetC[i] = vetA[i];
    }

    start = clock();
    bubbleSort(vetA);
    end = clock();

    printf("O vetor ordenado e: ");
    imprimeVetor(vetA);
    printf("\n\n");

    tempo_utilizadoA = (double) end - start;
    printf("Tempo utilizado p/ ordenar com Bubble: %.2lf\n", tempo_utilizadoA);

    start = clock();
    selectionSort(vetB);
    end = clock();

    tempo_utilizadoB = (double) end - start;
    printf("Tempo utilizado p/ ordenar com Selection: %.2lf\n", tempo_utilizadoB);

    start = clock();
    insertionSort(vetC);
    end = clock();

    tempo_utilizadoC = (double) end - start;
    printf("Tempo utilizado p/ ordenar com Insertion: %.2lf\n", tempo_utilizadoC);


    return 0;
}