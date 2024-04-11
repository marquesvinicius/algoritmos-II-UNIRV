/*
1) Crie uma matriz de inteiros de tamanho 5x3 e calcule a soma de cada uma das linhas.
Imprima os resultados na tela. Exemplo:
1 3 2 = Soma: 6
5 0 2 = Soma: 7
8 3 1 = Soma: 12
6 3 0 = Soma: 9
1 2 3 = Soma: 6.
 * */

#include <stdio.h>
#include <stdlib.h>
#define TAMLINHA 5
#define TAMCOL 3

int main() {
    int mat[TAMLINHA][TAMCOL], somaLinha[TAMLINHA], somaAtual;

    printf("Preencha a matriz de dimensoes %dx%d\n", TAMLINHA, TAMCOL);
    for(int i = 0; i < TAMLINHA; i++) {
        somaAtual = 0;
        for(int j = 0; j < TAMCOL; j++) {
            scanf("%d", &mat[i][j]);
            somaAtual+= mat[i][j];
        }
        somaLinha[i] = somaAtual;
    }

    printf("A matriz preenchida e a soma de cada linha e:\n");
    for(int i = 0; i < TAMLINHA; i++) {
        somaAtual = 0;
        for(int j = 0; j < TAMCOL; j++) {
            printf("%d ", mat[i][j]);

        }
        printf("= Soma: %d\n", somaLinha[i]);
    }


    return 0;



}
