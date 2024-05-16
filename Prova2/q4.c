//
// Created by MarquesV on 03/05/2024.
//


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAM 10
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

void imprimeVetor(int vet[TAM]) {
    for(int i = 0; i < TAM; i++){
        printf("%d ", vet[i]);
    }
}

int defineMenorValor(int vet[TAM]) {
    int menor = vet[0];

    for(int i = 0; i < TAM; i++){
        if(vet[i] < menor)
            menor = vet[i];
    }

    return menor;
}

int defineMaiorValor (int vet[TAM]){
    int maior = vet[0];

    for(int i = 0; i < TAM; i++){
        if(vet[i] > maior)
            maior = vet[i];
    }

    return maior;
}

int defineParidade (int n) {
    if(n % 2 == 0)
        return 1;
    return 0;
}


int main() {
    srand(time(NULL));

    int mat[TAM][TAM];

    preencheMatrizAleatoria(mat);
    imprimeMatriz(mat);

    for(int i = 0; i < TAM; i++) {
        int vet[TAM];
        printf("Linha %d | ", i);

        for(int j = 0; j < TAM; j++) {
            vet[j] = mat[i][j];
        }

        imprimeVetor(vet);
        printf(" | ");

        /*if(i%2 == 0) {
            int maiorValor = defineMaiorValor(vet);
            printf("Maior valor: %d\n", maiorValor);
        }

        else {
            int menorValor = defineMenorValor(vet);
            printf("Menor valor: %d\n", menorValor);
        }*/

        if(defineParidade(i)){
            int maiorValor = defineMaiorValor(vet);
            printf("Maior valor: %d\n", maiorValor);
        } else {
            int menorValor = defineMenorValor(vet);
            printf("Menor valor: %d\n", menorValor);
        }
    }

    return 0;

}

