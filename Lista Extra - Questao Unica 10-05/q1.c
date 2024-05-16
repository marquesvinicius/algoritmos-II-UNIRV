//
// Created by MarquesV on 11/05/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 9

/*
 * 1) Considere os seguintes vetores e responda. Utilize FUNÇÃO ou
    PROCEDIMENTO para validar toda os métodos BUBBLE, INSERTION e SELECTION em um único código.
    vetor1 = {9, 5, 2, 1, 4, 7, 6, 8, 3};
    vetor2 = {7, 2, 4, 9, 1, 5, 3, 6, 8};

    a. Qual método de ordenação será mais eficiente para ordenar o vetor1, ou seja, que irá
    realizar a menor quantidade de comparações e trocas? E para o vetor2?
 */

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

    int vetor1[] = {9, 5, 2, 1, 4, 7, 6, 8, 3};
    int vetor2[] = {7, 2, 4, 9, 1, 5, 3, 6, 8};
    int vetor1A[TAM], vetor1B[TAM], vetor1C[TAM];
    int vetor2A[TAM], vetor2B[TAM], vetor2C[TAM];
    int contadorBubble1, contadorBubble2, contadorInsertion1, contadorInsertion2, contadorSelection1, contadorSelection2;

    for (int i = 0; i < TAM; i++) {
        vetor1A[i] = vetor1[i];
        vetor1B[i] = vetor1[i];
        vetor1C[i] = vetor1[i];
        vetor2A[i] = vetor2[i];
        vetor2B[i] = vetor2[i];
        vetor2C[i] = vetor2[i];
    }

    printf("Os vetores originais sao:\nVetor 1: ");
    imprimeVetor(vetor1);
    printf("Vetor 2: ");
    imprimeVetor(vetor2);

    contadorBubble1 = bubbleSort(vetor1A);
    contadorBubble2 = bubbleSort(vetor2A);

    contadorInsertion1 = insertionSort(vetor1B);
    contadorInsertion2 = insertionSort(vetor2B);

    contadorSelection1 = selectionSort(vetor1C);
    contadorSelection2 = selectionSort(vetor2C);

    printf("\n\nVetor 1 ordenado com Bubble Sort:\n");
    imprimeVetor(vetor1A);
    printf("Execucoes do Bubble Sort no Vetor 1: %d\n", contadorBubble1);

    printf("\n\nVetor 2 ordenado com Bubble Sort:\n");
    imprimeVetor(vetor2A);
    printf("Execucoes do Bubble Sort no Vetor 2: %d\n", contadorBubble2);

    printf("\n\nVetor 1 ordenado com Insertion Sort:\n");
    imprimeVetor(vetor1B);
    printf("Execucoes do Insertion Sort no Vetor 1: %d\n", contadorInsertion1);

    printf("\n\nVetor 2 ordenado com Insertion Sort:\n");
    imprimeVetor(vetor2B);
    printf("Execucoes do Insertion Sort no Vetor 2: %d\n", contadorInsertion2);

    printf("\n\nVetor 1 ordenado com Selection Sort:\n");
    imprimeVetor(vetor1C);
    printf("Execucoes do Selection Sort no Vetor 1: %d\n", contadorSelection1);

    printf("\n\nVetor 2 ordenado com Selection Sort:\n");
    imprimeVetor(vetor2C);
    printf("Execucoes do Selection Sort no Vetor 2: %d\n", contadorSelection2);

    /*
     * RESPOSTA A:
     * INSERTION SORT É O MAIS EFICIENTE P/ AMBOS CASOS
     */

    return 0;
}