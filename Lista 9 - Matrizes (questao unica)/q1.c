//
// Created by MarquesV on 21/03/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMLINHA 5
#define TAMCOL 5
#define LIMIT 10

int main()
{
    srand(time(NULL));

    int mat[TAMLINHA][TAMCOL], somaDiagPrincipal = 0, somaDiagSecundaria = 0;

    printf("A matriz gerada e: \n");

    for(int i = 0; i < TAMLINHA; i++){
        for(int j = 0; j < TAMCOL; j++){
            mat[i][j] = rand() % LIMIT;
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    //QUESTAO A
    printf("\na) Os valores da diagonal principal sao: ");
    for(int i = 0; i < TAMLINHA; i++){
        for(int j = 0; j < TAMCOL; j++){
            if(i == j) {
                printf("%d ", mat[i][j]);
            }
        }
    }

    //QUESTAO B
    printf("\nb) Os valores da diagonal secundaria sao: ");
    for(int i = 0; i < TAMLINHA; i++){
        for(int j = TAMCOL - 1; j >= 0; j--){
            if(j == TAMCOL - 1 - i) {
                printf("%d ", mat[i][j]);
            }
        }
    }

    //QUESTAO C
    printf("\nc) A soma dos valores da diagonal principal e: ");
    for(int i = 0; i < TAMLINHA; i++){
        for(int j = 0; j < TAMCOL; j++){
            if(i == j) {
                somaDiagPrincipal += mat[i][j];
            }
        }
    }
    printf("%d", somaDiagPrincipal);

    //QUESTAO D
    printf("\nd) A soma dos valores da diagonal secundaria e: ");
    for(int i = 0; i < TAMLINHA; i++){
        for(int j = TAMCOL - 1; j >= 0; j--){
            if(j == TAMCOL - 1 - i) {
                somaDiagSecundaria += mat[i][j];
            }
        }
    }
    printf("%d", somaDiagSecundaria);

    return 0;
}

