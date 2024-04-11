//
// Created by MarquesV on 21/03/2024.
//

/*
    3) Crie uma matriz 5x5 com valores aleatórios, imprima a matriz original, em seguida
    some os valores da diagonal principal mais a diagonal secundaria.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMLINHA 5
#define TAMCOL 5
#define LIMIT 10

int main() {
    srand(time(NULL));

    int mat[TAMLINHA][TAMCOL], matTrans[TAMLINHA][TAMCOL], somaTotal, somaDiagPrincipal = 0, somaDiagSecundaria = 0;

    printf("A matriz gerada e: \n");
    for(int i = 0; i < TAMLINHA; i++){
        for(int j = 0; j < TAMCOL; j++) {
            mat[i][j] = rand() % LIMIT;
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }


    for(int i = 0; i < TAMLINHA; i++){
        for(int j = 0; j < TAMCOL; j++){
            if(i == j) {
                somaDiagPrincipal += mat[i][j];
            }

            if(j == TAMCOL - 1 - i) {
                somaDiagSecundaria += mat[i][j];
            }
        }
    }

    somaTotal = somaDiagPrincipal + somaDiagSecundaria;

    printf("A soma da diagonal principal + diagonal secundaria e igual a: %d", somaTotal);

    return 0;


}