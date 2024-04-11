//
// Created by MarquesV on 21/03/2024.
//

/*
    1) Crie uma matriz 5x5 com valores aleatórios em seguida faça, imprima a matriz
    original e sua matriz transposta
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMLINHA 5
#define TAMCOL 5
#define LIMIT 10

int main() {
    srand(time(NULL));

    int mat[TAMLINHA][TAMCOL], matTrans[TAMLINHA][TAMCOL];

    printf("A matriz gerada e: \n");
    for(int i = 0; i < TAMLINHA; i++){
        for(int j = 0; j < TAMCOL; j++) {
            mat[i][j] = rand() % LIMIT;
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }


    return 0;


}