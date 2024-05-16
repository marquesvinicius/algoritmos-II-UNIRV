//
// Created by MarquesV on 03/05/2024.
//

/*
    3) Gere uma Matriz 5x5 com valores inteiros aleatórios, em seguida informe qual é o
    valor do ponto central dessa matriz, após verifique se esse valor é um número primo.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 7
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


void imprimeVetor(int vet[TAM]) {
    for(int i = 0; i < TAM; i++){
        printf("%d ", vet[i]);
    }
}

int ePrimo(int number) {
    if (number <= 1) return 0; // se o numero for menor ou igual a 1 então nao é primo.
    int i;

    for (i = 2;  i * i <= number; i++) {
        if (number % i == 0) return 0;
    }

    return 1;
}

int main() {
    srand(time(NULL));

    int mat[TAM][TAM];
    int diagSecundaria[TAM];

    preencheMatrizAleatoria(mat);
    printf("A matriz gerada aleatoriamente e:\n");
    imprimeMatriz(mat);

    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            if(j == TAM - 1 - i) {
                diagSecundaria[i] = mat[i][j];
            }
        }
    }

    printf("A diag. secundaria e:\n");
    imprimeVetor(diagSecundaria);


    printf("\nOs valores primos da diag. secundaria sao:\n");
    for(int i = 0; i < TAM; i++) {
        if(ePrimo(diagSecundaria[i])){
            printf("%d e primo\n", diagSecundaria[i]);
        }
    }

    return 0;

}

