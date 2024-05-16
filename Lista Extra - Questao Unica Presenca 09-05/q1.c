/*
 * Dado um vetor aleatório de 150 posições, com números que variam até 500, faça a ordenação desses valores, utilizando os algoritmos
 * de método da Bolha, Inserção e Seleção, verifique quantas vezes
 * foi necessário para executar os algoritmos afim de deixar o vetor ordenado.
 */

/*
 * no Bubble Sort, cada vez que o programa compara dois elementos adjacentes para ver se eles precisam ser trocados, o contador é incrementado.
 * No Insertion Sort, o contador é incrementado cada vez que o programa compara o elemento atual (a chave) com os elementos anteriores para encontrar a posição correta para inserção.
 * E no Selection Sort, o contador é incrementado a cada comparação para encontrar o menor elemento na parte não ordenada do vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 150
#define LIMIT 500

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

    int vetA[TAM], vetB[TAM], vetC[TAM], vetD[TAM];
    int contadorBubble, contadorInsertion, contadorSelection;

    preencheVetorAleatorio(vetA);

    for (int i = 0; i < TAM; i++) {
        vetB[i] = vetA[i];
        vetC[i] = vetA[i];
        vetD[i] = vetA[i];
    }

    printf("O vetor gerado aleatoriamente e:\n");
    imprimeVetor(vetA);

    contadorBubble = bubbleSort(vetB);
    contadorInsertion = insertionSort(vetC);
    contadorSelection = selectionSort(vetD);

    printf("\n\nVetor ordenado com Bubble Sort:\n");
    imprimeVetor(vetB);
    printf("Execucoes do Bubble Sort: %d\n", contadorBubble);

    printf("\n\nVetor ordenado com Insertion Sort:\n");
    imprimeVetor(vetC);
    printf("Execucoes do Insertion Sort: %d\n", contadorInsertion);

    printf("\n\nVetor ordenado com Selection Sort:\n");
    imprimeVetor(vetD);
    printf("Execucoes do Selection Sort: %d\n", contadorSelection);

    return 0;

}