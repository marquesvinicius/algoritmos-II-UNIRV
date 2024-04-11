#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 50
#define LIMIT 101

int main() {
    srand(time(NULL));
    
    int vet[TAM];
    
    for(int i = 0; i < TAM; i++) {
        vet[i] = rand () % LIMIT; 
    }
    
    printf("O vetor original eh: ");
    for(int i = 0; i < TAM; i++) {
        printf("%d ", vet[i]);
    }
    
    for(int i = 0; i < TAM; i++) {
        if(vet[i]%2 != 0) {
            vet[i] = 0;
        }
    }
    
    printf("\nO vetor com os valores impares substituidos por 0 sao: ");
    for(int i = 0; i < TAM; i++) {
        printf("%d ", vet[i]);
    }
    
}