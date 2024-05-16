//
// Created by MarquesV on 03/05/2024.
//


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAM 4
#define LIMIT 10

void preencheMatrizAleatoria(int mat[TAM][TAM]) {
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            mat[i][j] = rand() % LIMIT;
        }
    }
}

void imprimeMatriz(int mat[TAM][TAM]) {
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("%d ", mat[i][j]);
        }

        printf("\n");
    }
}


int potenciacao(int a, int b) {
    return pow(a, b);
}

int main() {
    srand(time(NULL));

    int mat[TAM][TAM];
    int x1, y1, x2, y2;

    preencheMatrizAleatoria(mat);
    imprimeMatriz(mat);

    printf("Insira a primeira posicao da matriz (0 a %d)\n", TAM - 1);
    scanf("%d %d", &x1, &y1);

    printf("Insira a segunda posicao da matriz (0 a %d)\n", TAM - 1);
    scanf("%d %d", &x2, &y2);

    int resultado = potenciacao(mat[x1][y1], mat[x2][y2]);

    printf("A potenciacao do valor da primeira posicao (%d) pelo da segunda posicao (%d) e igual a:\n", mat[x1][y1], mat[x2][y2]);
    printf("%d", resultado);



    return 0;

}

