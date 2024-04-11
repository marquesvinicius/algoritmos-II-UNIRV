/*
3) Gere e imprima uma matriz M 10x10 com valores aleatórios entre 0-9. Após isso
indique qual é o maior e o menor valor da linha 5 e qual é o maior e o menor valor da
coluna 7
 * */

#include <stdio.h>
#include <stdlib.h>
#define TAMLINHA 10
#define TAMCOL 10
#define ESCOLHALINHA 5
#define ESCOLHACOL 7
#define LIMIT 10

int main() {
    int mat[TAMLINHA][TAMCOL], maiorValorLinha = 0, menorValorLinha = 9, maiorValorColuna = 0, menorValorColuna = 9;

    for(int i = 0; i < TAMLINHA; i++) {
        for(int j = 0; j < TAMCOL; j++) {
            mat[i][j] = rand() % LIMIT;
        }
    }
    printf("A matriz gerada aleatoriamente e:\n");
    for(int i = 0; i < TAMLINHA; i++) {
        for(int j = 0; j < TAMCOL; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < TAMLINHA; i++) {
        for(int j = 0; j < TAMCOL; j++) {
            if(i == 5) {
                if(mat[i][j] > maiorValorLinha) {
                    maiorValorLinha = mat[i][j];
                }

                if(mat[i][j] < menorValorLinha) {
                    menorValorLinha = mat[i][j];
                }
            }

            if(j == 7) {
                if(mat[i][j] > maiorValorColuna) {
                    maiorValorColuna = mat[i][j];
                }

                if(mat[i][j] < menorValorColuna) {
                    menorValorColuna = mat[i][j];
                }
            }
        }
    }


    printf("Linha %d: Maior valor = %d || Menor valor = %d\n", ESCOLHALINHA, maiorValorLinha, menorValorLinha);
    printf("Coluna %d: Maior valor = %d || Menor valor = %d\n", ESCOLHACOL, maiorValorColuna, menorValorColuna);



    return 0;



}
