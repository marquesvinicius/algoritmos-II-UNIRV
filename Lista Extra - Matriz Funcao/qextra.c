//
// Created by MarquesV on 11/04/2024.
//

/*
 *  Faça uma função que receba uma matriz A(10,10), por parâmetro, e realize as
    seguintes trocas:
    a linha 2 com a linha 8;
    a coluna 4 com a coluna 10;
    a diagonal principal com a secundária;
    a linha 5 com a coluna 10;
    a função deve retornar a matriz alterada
 *
 * */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define LIMIT 11

void trocaLinha2por8(int mat[TAM][TAM]) {
    for(int i = 0; i < TAM; i++) {
        int temp = mat[1][i];
        mat[1][i] = mat[7][i];
        mat[7][i] = temp;
    }
}

void trocaColuna4por10(int mat[TAM][TAM]){
    for(int i = 0; i < TAM; i++) {
        int temp = mat[i][3];
        mat[i][3] = mat[i][9];
        mat[i][9] = temp;
    }
}

void trocaDiagonais(int mat[TAM][TAM]) {
    int temp;
    for (int i = 0; i < TAM; i++) {
        temp = mat[i][i];
        mat[i][i] = mat[i][TAM-1-i];
        mat[i][TAM-1-i] = temp;
    }
}

void imprimeMatriz(int mat[TAM][TAM]){
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void preencheMatriz(int mat[TAM][TAM]) {
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            mat[i][j] = rand() % LIMIT;
        }
    }
}


int main() {

    srand(time(NULL));

    int mat[TAM][TAM];

    preencheMatriz(mat);

    printf("Matriz original:\n");
    imprimeMatriz(mat);

    trocaLinha2por8(mat);
    trocaColuna4por10(mat);
    trocaDiagonais(mat);


    printf("\nMatriz com as alteracoes:\n");
    imprimeMatriz(mat);

    return 0;
}