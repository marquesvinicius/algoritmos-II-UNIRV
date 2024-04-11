/*
2) Crie uma matriz de inteiros de tamanho 5x5 com valores aleatórios. Calcule a soma de uma
coluna específica, que será escolhida pelo usuário. Exemplo
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMLINHA 5
#define TAMCOL 5
#define LIMIT 11

int main() {
    srand(time(NULL));

    int mat[TAMLINHA][TAMCOL], colunaSolicitada, soma = 0;

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

    printf("Digite a coluna (1 a %d) da qual voce quer a soma:\n", TAMCOL);
    scanf("%d", &colunaSolicitada);
    colunaSolicitada -= 1;

    for(int i = 0; i < TAMLINHA; i++){
        for(int j = 0; j < TAMCOL; j++) {
            if(j == colunaSolicitada) {
                soma += mat[i][j];
            }
        }
    }

    printf("A soma da coluna solicitada e: %d", soma);

    return 0;



}
