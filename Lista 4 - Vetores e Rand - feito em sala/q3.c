#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAM 50
#define LIMIT 100

int main() {
    int vetor[TAM];
    srand(time(NULL));

    printf("Preenchendo o vetor com valores aleatórios:\n");
    for (int i = 0; i < TAM; i++) {
        vetor[i] = rand() % LIMIT; 
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    printf("Valores repetidos e suas posições:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = i + 1; j < TAM; j++) {
            if (vetor[i] == vetor[j]) {
                printf("Valor %d repetido nas posições %d e %d\n", vetor[i], i, j);
            }
        }
    }
    
}