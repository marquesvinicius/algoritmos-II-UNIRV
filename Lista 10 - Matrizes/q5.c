//
// Created by MarquesV on 21/03/2024.
//

/*
    5) Crie uma matriz de inteiros 10x10 com valores aleatórios. Imprima essa matriz, em seguida
    verifique nas linhas pares, quais são os números pares, imprima esses valores encontrados
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMLINHA 10
#define TAMCOL 10
#define LIMIT 10

int main() {
    srand(time(NULL));

    int mat[TAMLINHA][TAMCOL];

    printf("A matriz gerada e: \n");
    for(int i = 0; i < TAMLINHA; i++){
        for(int j = 0; j < TAMCOL; j++) {
            mat[i][j] = rand() % LIMIT;
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("Os valores pares nas linhas pares sao: ");
    for(int i = 0; i < TAMLINHA; i++){
        if(i % 2 == 0)
            printf("\nLinha %d: ", i);

        for(int j = 0; j < TAMCOL; j++) {
            if(mat[i][j] % 2 == 0) {
                printf("%d ", mat[i][j]);
            }
        }
    }

    return 0;

}