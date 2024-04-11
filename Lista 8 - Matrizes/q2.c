/* 2) Em C preencha uma matriz 7x7 com valores aleatórios até 50, em seguida verifique
quais numeros são pares, coloque esses numeros em uma segunda matriz.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMLINHA 7
#define TAMCOLUNA 7
#define LIMIT 51

int main() {

    srand(time(NULL));

    int matA[TAMLINHA][TAMCOLUNA];
    int matB[TAMLINHA][TAMCOLUNA] = {0};

    for(int i = 0; i < TAMLINHA; i++) {
        for(int j = 0; j < TAMCOLUNA; j++) {
            matA[i][j] = rand() % LIMIT;

            if(matA[i][j] % 2 == 0) {
                matB[i][j] = matA[i][j];
            }
        }
    }

    printf("Matriz A:\n");
    for(int i = 0; i < TAMLINHA; i++) {
        for(int j = 0; j < TAMCOLUNA; j++) {
            printf("%d ", matA[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B (apenas os valores pares de A, o restante e 0):\n");
    for(int i = 0; i < TAMLINHA; i++) {
        for(int j = 0; j < TAMCOLUNA; j++) {
            printf("%d ", matB[i][j]);
        }
        printf("\n");
    }

    return 0;
}
