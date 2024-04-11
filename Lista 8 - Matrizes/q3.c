/* 3) Solicite que o usuário digite o tamanho de duas matrizes quadradas, em seguida gere
numeros aleatórios inteiros para preencher a matriz. Após calcule a SOMA da primeira
linha da matriz A com a soma da primeira linha da matriz B.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIMIT 10


int main() {

    srand(time(NULL));

    int dimensoesMatriz;

    printf("Digite as dimensoes da matriz (esse programa so gera matrizes quadradas, entao so sera necessario 1 digito\n");
    scanf("%d", &dimensoesMatriz);

    int matA[dimensoesMatriz][dimensoesMatriz], matB[dimensoesMatriz][dimensoesMatriz], somaLinhaA = 0, somaLinhaB = 0, somaTotal;

    for(int i = 0; i < dimensoesMatriz; i++) {
        for(int j = 0; j < dimensoesMatriz; j++) {
            matA[i][j] = rand() % LIMIT;
            matB[i][j] = rand() % LIMIT;
        }
    }

    printf("A matriz A gerada aleatoriamente e:\n");
    for(int i = 0; i < dimensoesMatriz; i++) {
        for(int j = 0; j < dimensoesMatriz; j++) {
            printf("%d ", matA[i][j]);
            if (i == 0)
                somaLinhaA += matA[i][j];
        }
        printf("\n");
    }

    printf("A matriz B gerada aleatoriamente e:\n");
    for(int i = 0; i < dimensoesMatriz; i++) {
        for(int j = 0; j < dimensoesMatriz; j++) {
            printf("%d ", matB[i][j]);
            if (i == 0)
                somaLinhaB += matB[i][j];
        }
        printf("\n");
    }

    somaTotal = somaLinhaA + somaLinhaB;

    printf("A soma da linha A com a linha B equivale a: %d", somaTotal);

    return 0;
}
