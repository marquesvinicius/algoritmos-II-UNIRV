//
// Created by MarquesV on 13/03/2024.
//

#include <stdio.h>
#include <stdlib.h>
#define TAMLINHA 3
#define TAMCOL 3


int main() {

    int mat[TAMLINHA][TAMCOL];


    printf("Preencha a matriz de tamanho %dx%d\n", TAMLINHA, TAMCOL);
    for(int i = 0; i < TAMLINHA; i++) {
        for(int j = 0; j < TAMCOL; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("A matriz inserida e:\n");
    for(int i = 0; i < TAMLINHA; i++) {
        for(int j = 0; j < TAMCOL; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}