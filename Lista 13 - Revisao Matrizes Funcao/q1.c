//
// Created by MarquesV on 26/04/2024.
//

/*
 *  1) Faça um programa que preencha uma matriz 5x6 com números inteiros aleatórios,
    some cada uma das linhas, armazenando o resultado da soma em um vetor. A seguir o
    programa deverá multiplicar cada elemento da matriz pela soma do vetor e mostrar a
    matriz resultante.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMLINHA 5
#define TAMCOL 6
#define LIMIT 10

void preencheMatrizAleatoria(int mat[TAMLINHA][TAMCOL]) {
    for(int i = 0; i < TAMLINHA; i++){
        for(int j = 0; j < TAMCOL; j++){
            mat[i][j] = rand() % LIMIT;
        }
    }
}

void imprimeMatriz(int mat[TAMLINHA][TAMCOL]) {
    for(int i = 0; i < TAMLINHA; i++){
        for(int j = 0; j < TAMCOL; j++){
            printf("%d ", mat[i][j]);
        }

        printf("\n");
    }
}

void imprimeVetor(int vet[TAMLINHA]) {
    for(int i = 0; i < TAMLINHA; i++){
        printf("%d ", vet[i]);
    }
}

void somaLinhas(int mat[TAMLINHA][TAMCOL], int vetor[TAMLINHA]) {
    for(int i = 0; i < TAMLINHA; i++) {
        vetor[i] = 0;
        for(int j = 0; j < TAMCOL; j++) {
            vetor[i] += mat[i][j];
        }
    }
}

void multiplicaElementosSoma(int mat[TAMLINHA][TAMCOL], int vetor[TAMLINHA], int matMultiplicada[TAMLINHA][TAMCOL]){
    for(int i = 0; i < TAMLINHA; i++){
        for(int j = 0; j < TAMCOL; j++) {
            matMultiplicada[i][j] = mat[i][j] * vetor[i];
        }
    }
}

int main() {
    srand(time(NULL));

    int mat[TAMLINHA][TAMCOL], matMultiplicada[TAMLINHA][TAMCOL];
    int vetor[TAMLINHA];

    preencheMatrizAleatoria(mat);

    printf("A matriz aleatoria e:\n");
    imprimeMatriz(mat);
    somaLinhas(mat, vetor);

    printf("O vetor da soma das linhas e:\n");
    imprimeVetor(vetor);

    printf("\nA matriz multiplicada pela soma das linhas e:\n");
    multiplicaElementosSoma(mat, vetor, matMultiplicada);
    imprimeMatriz(matMultiplicada);

    return 0;
}