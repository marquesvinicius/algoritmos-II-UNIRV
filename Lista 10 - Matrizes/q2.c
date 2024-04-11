//
// Created by MarquesV on 21/03/2024.
//

/*
    2) Crie uma matriz 5x5 com valores aleatórios em seguida faça, informe uma linha para
    ser impressa, se na linha tiver algum valor par, imprima esse valor, se não tiver
    informe que na linha selecionada não contém valor par.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMLINHA 5
#define TAMCOL 5
#define LIMIT 10

int main() {
    srand(time(NULL));

    int mat[TAMLINHA][TAMCOL], linha;

    printf("A matriz gerada aleatoriamente e:\n");
    for(int i = 0; i < TAMLINHA; i++) {
        for(int j = 0; j < TAMCOL; j++) {
            mat[i][j] = rand() % LIMIT;
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("Digite a linha da qual voce quer a analise (0 a %d):", TAMLINHA - 1);
    scanf("%d", &linha);

    printf("A linha selecionada e: ");
    for(int i = 0; i < TAMLINHA; i++) {
        for(int j = 0; j < TAMCOL; j++) {
            if(i == linha) {
                printf("%d ", mat[i][j]);
            }
        }
    }

    printf("\nOs valores pares dessa linha sao: ");
    for(int i = 0; i < TAMLINHA; i++) {
        for(int j = 0; j < TAMCOL; j++) {
            if(i == linha && mat[i][j] % 2 == 0) {
                printf("%d ", mat[i][j]);
            }
        }
    }


    return 0;


}