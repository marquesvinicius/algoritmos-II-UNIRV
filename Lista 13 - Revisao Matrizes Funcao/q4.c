//
// Created by MarquesV on 26/04/2024.
//

/*
    4) Gere uma Matriz 5x5 com valores inteiros aleatórios, em seguida inverta a linha 1 com
    a linha 4, após gere a matriz transposta, onde as linhas se tornam colunas. Imprima
    todas as matrizes geradas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5
#define LIMIT 10

void preencheMatrizAleatoria(int mat[TAM][TAM]) {
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            mat[i][j] = rand() % LIMIT;
        }
    }
}

void imprimeMatriz(int mat[TAM][TAM]) {
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("%d ", mat[i][j]);
        }

        printf("\n");
    }
}

int trocaLinha1Linha4(int mat[TAM][TAM]) {
    int vetorAuxiliar[TAM];

    for(int i = 0; i < TAM; i++){
            vetorAuxiliar[i] = mat[4][i];
            mat[4][i] = mat[1][i];
            mat[1][i] = vetorAuxiliar[i];
    }

}


void calculaTransposta(int A[TAM][TAM], int B[TAM][TAM]){
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++) {
            B[j][i] = A[i][j];
        }
    }
}

int main() {
    srand(time(NULL));

    int matA[TAM], matB[TAM];


    preencheMatrizAleatoria(matA);
    printf("A matriz gerada aleatoriamente e:\n");
    imprimeMatriz(matA);

    trocaLinha1Linha4(matA);
    printf("A matriz apos trocar a linha [1] pela linha [4] e:\n");
    imprimeMatriz(matA);

    calculaTransposta(matA, matB);
    printf("A matriz A transposta e:\n");
    imprimeMatriz(matB);

    return 0;

}