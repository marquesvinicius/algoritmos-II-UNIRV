#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main()
{
    
    int vet[TAM], repeticao = -1;
    
    printf("Preencha o vetor de tamanho %d com valores positivos.\nEm seguida, o programa ira mostrar se ha algum valor repetido no vetor e qual e esse valor\n", TAM);
    for(int i = 0; i < TAM; i++){
        scanf("%d", &vet[i]);
    }
    
    for(int i = 0; i < TAM; i++){
        int comparador = vet[i];
        for(int j = i + 1; j < TAM + 1; j++) {
            int comparando = vet[j];
            
            if(comparador == comparando) {
                repeticao = comparador;
            }
        }
        
    }
    
    if(repeticao == -1) {
        printf("No vetor NAO HA valores repetidos\n");
    }
    else {
        printf("No vetor HA valores repetidos. O valor que se repete e: %d\n", repeticao);        
    }
    
    return 0;
    
}

