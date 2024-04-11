#include <stdio.h>
#define TAM 5

int main() {
    int A[TAM], B[TAM], C[TAM], D[TAM*3];
    

    printf("digite todos os valores do vetor A\n");
    for(int i = 0; i < TAM; i++) {
        scanf("%d", &A[i]);
    }

    printf("digite todos os valores do vetor B\n");
    for(int i = 0; i < TAM; i++) {
        scanf("%d", &B[i]);
    }

    printf("digite todos os valores do vetor C\n");
    for(int i = 0; i < TAM; i++) {
        scanf("%d", &C[i]);
    }

    for(int i = 0; i < TAM; i++) {
        D[i] = A[i];
        D[i+TAM] = B[i];
        D[i+TAM*2] = C[i];
    }

    printf("o vetor D (a juncao de todos os vetores) e: ");
    for(int i = 0; i < TAM * 3; i++) {
        printf("%d ", D[i]);
    }

}
