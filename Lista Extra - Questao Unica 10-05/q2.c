//
// Created by MarquesV on 11/05/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 150
#define LIMIT 500

/*
 * 2) Dada uma matriz, ordene cada linha da matriz usando o algoritmo Bubble Sort, utilize FUNÇÃO.
    • Crie uma matriz 5x5 com números inteiros aleatórios.
    • Use o algoritmo Bubble Sort para ordenar cada linha da matriz em ordem
    crescente.
    • Exiba a matriz antes e depois da ordenação.
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


int main() {

   srand(time(NULL));

   int mat[TAM][TAM];

    preencheMatrizAleatoria(mat);

    printf("A matriz desordenada e:\n");

    imprimeMatriz(mat);

    for(int i = 0; i < TAM; i++) {
        int vet[TAM];

        for(int j = 0; j < TAM; j++) {
            vet[j] = mat[i][j];
        }

        bubbleSort(vet);

        for(int j = 0; j < TAM; j++) {
            mat[i][j] = vet[j];
        }
    }

    printf("\nA matriz ordenada linha por linha e:\n");

    imprimeMatriz(mat);


    return 0;
}