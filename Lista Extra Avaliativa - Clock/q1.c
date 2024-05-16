//
// Created by MarquesV on 16/05/2024.
//

/*
 * 1 - Gere um vetor automático com 100 posições com valores que variam até 500, em seguida utilize o SELECTION SORT
 * para ordenar esse vetor, solicite que o usuário digite um valor para ser buscado no vetor, utilizando a função CLOCK(  )
 * informe quanto tempo levou para que esse valor fosse encontrado ou não. Deve ser impresso o vetor original, o vetor ordenado,
 * a posição em que o valor está, caso seja encontrado e o tempo que levou para percorrer esse vetor.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5000
#define LIMIT 501

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

int encontraValor(int vet[TAM], int valor) {
    for (int i = 0; i < TAM; i++) {
        if(vet[i] == valor) {
            return i;
        }
    }
    return -1;
}


int main() {
    srand(time(NULL));

    int vetA[TAM], vetB[TAM], valorEncontrado;
    clock_t start, end;
    double tempo_utilizado;

    preencheVetorAleatorio(vetA);

    for(int i = 0; i < TAM; i++){
        vetB[i] = vetA[i];
    }

    printf("Vetor gerado aleatoriamente:\n");

    imprimeVetor(vetB);

    selectionSort(vetB);

    printf("Vetor acima ordenado:\n");
    imprimeVetor(vetB);

    printf("Insira um valor (0 a %d) para ser encontrado no vetor acima:\n", TAM);
    scanf("%d", &valorEncontrado);

    start = clock();
    selectionSort(vetA);
    encontraValor(vetA, valorEncontrado);
    end = clock();

    tempo_utilizado = (double)(end - start);
    printf("Posicao do valor: %d\n", encontraValor(vetA, valorEncontrado));
    printf("Tempo utilizado p/ encontrar o valor %d com Selection: %.2lf\n", valorEncontrado, tempo_utilizado);


    return 0;
}