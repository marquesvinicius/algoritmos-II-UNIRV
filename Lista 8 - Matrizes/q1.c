/* 1) Escreva C um algoritmo com duas matrizes[5][5] inteiros preenchidas aleatoriamente. Uma
vez preenchida, use um laço para mostrar os valores de seus elementos. Preencha cada
elemento da segunda matriz com o dobro do valor do elemento correspondente na primeira
matriz.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMLINHA 5
#define TAMCOLUNA 5
#define LIMIT 10

int main() {

    srand(time(NULL));

    int matA[TAMLINHA][TAMCOLUNA], matB[TAMLINHA][TAMCOLUNA];

    for(int i = 0; i < TAMLINHA; i++) {
        for(int j = 0; j < TAMCOLUNA; j++) {
            matA[i][j] = rand() % LIMIT;
            matB[i][j] = matA[i][j] * 2;
        }
    }

    printf("Elementos da matriz A:\n");
    for(int i = 0; i < TAMLINHA; i++){
        for(int j = 0; j < TAMCOLUNA; j++) {
            printf("%d ", matA[i][j]);
        }
        printf("\n");
    }

    printf("\nElementos da matriz B (respectivos dobros da matriz A):\n");
    for(int i = 0; i < TAMLINHA; i++){
        for(int j = 0; j < TAMCOLUNA; j++) {
            printf("%d ", matB[i][j]);
        }
        printf("\n");
    }


    return 0;
}
