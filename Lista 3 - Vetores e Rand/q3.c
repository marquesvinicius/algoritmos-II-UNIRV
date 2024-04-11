#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 50
#define LIMIT 101

int main()
{
    srand(time(NULL));
    
    int vet[TAM], soma = 0, countImpar = 0;
    
    for(int i = 0; i < TAM; i++) {
        vet[i] = rand() % LIMIT;
        
        if(vet[i]%2 == 0) {
            soma += vet[i];
        }
        
        else {
            countImpar++;
        }
    }
    
    printf("Os valores do vetor gerados aleatoriamente sao: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vet[i]);
    }
    
    //Questao a
    printf("\na. A soma dos valores pares desse vetor equivale a: %d", soma);
    
    //Questao b
    printf("\nb. Os valores impares desse vetor sao: ");
    for (int i = 0; i < TAM; i++) {
        if(vet[i]%2 != 0) {
            printf("%d ", vet[i]);            
        }
    }
    printf("totalizando %d numeros impares", countImpar);
    
    return 0;
    
}

