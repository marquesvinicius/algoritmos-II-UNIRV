//
// Created by MarquesV on 26/04/2024.
//

/*
    3) Gere uma Matriz 5x5 com valores inteiros aleatórios, em seguida informe qual é o
    valor do ponto central dessa matriz, após verifique se esse valor é um número primo.
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

int extraiElementoCentral(int mat[TAM][TAM]) {
    int m = (TAM - 1)/2;
    int pontoCentral = mat[m][m];

    return pontoCentral;
}

void imprimeMatriz(int mat[TAM][TAM]) {
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("%d ", mat[i][j]);
        }

        printf("\n");
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
    int pontoCentral;

    preencheMatrizAleatoria(mat);
    printf("A matriz gerada aleatoriamente e:\n");
    imprimeMatriz(mat);

    pontoCentral = extraiElementoCentral(mat);


    ePrimo(pontoCentral) ? printf("O valor central (%d) e primo", pontoCentral) : printf("O valor central (%d) nao e primo", pontoCentral);

    return 0;

}

