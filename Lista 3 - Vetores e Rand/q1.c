#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 50
#define LIMIT 501

int main()
{
    srand(time(NULL));
    
    int vet[TAM];
    
    for(int i = 0; i < TAM; i++) {
        vet[i] = rand() % LIMIT;
    }
    
    //Questao a
    printf("a. Os valores do vetor gerados aleatoriamente sao: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vet[i]);
    }
    
    //Questao b
    printf("\nb. Os valores pares do vetor sao: "); 
    for (int i = 0; i < TAM; i++) {
        if(vet[i]%2 == 0) {
            printf("%d ", vet[i]);
        }
    }
    
    //Questao c
    printf("\nc. Os numeros divisiveis por tres desse vetor sao: ");
    for(int i = 0; i < TAM; i++) {
        if(vet[i]%3 == 0) {
            printf("%d ", vet[i]);
        }
    }
    
    //Questao d
    printf("\nd. Os multiplos de 7 presentes nesse vetor sao: ");
    for(int i = 0; i < TAM; i++) {
        if(vet[i]%7 == 0) {
            printf("%d ", vet[i]);
        }
    }
    
    return 0;
    
    
}

