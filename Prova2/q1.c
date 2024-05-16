//
// Created by MarquesV on 26/04/2024.
//

/*
    1) Crie 2 vetores de 10 posições de tipo inteiro. Realiza o seguinte cálculo, armazenando
    em um vetorC:
    Primeira posição do vetorA X última índice vetorB;
    Segundo índice do vetorA X penúltimo índice do vetor B;
    ... ...
    Última índice do vetorA X primeiro índice do vetorB
    Utiliza função ou procedimento para realizar o processo.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define LIMIT 10

void preencheVetorAleatorio(int vet[TAM]) {
    for(int i = 0; i < TAM; i++){
        vet[i] = rand() % LIMIT;
    }
}

void imprimeVetor(int vet[TAM]) {
    for(int i = 0; i < TAM; i++){
        printf("%d ", vet[i]);
    }
}

void calculaVetorResultante(int vetA[TAM], int vetB[TAM], int vetC[TAM]){
    for(int i = 0; i < TAM; i++) {
        vetC[i] = vetA[i] * vetB[TAM - 1 - i];
    }
}


int main() {

    srand(time(NULL));

    int vetA[TAM], vetB[TAM], vetC[TAM];

    preencheVetorAleatorio(vetA);
    printf("O vetor A e:\n");
    imprimeVetor(vetA);


    preencheVetorAleatorio(vetB);
    printf("\nO vetor B e:\n");
    imprimeVetor(vetB);

    calculaVetorResultante(vetA, vetB, vetC);
    printf("\nO vetor resultante e:\n");
    imprimeVetor(vetC);

    return 0;
}
