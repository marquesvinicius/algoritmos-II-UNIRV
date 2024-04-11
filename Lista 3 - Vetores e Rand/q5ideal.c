#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main()
{
    
    int vet[TAM], repeticao = -1;
    int marcados[TAM] = {0};
    
    printf("Preencha o vetor de tamanho %d com valores positivos.\nEm seguida, o programa ira mostrar se ha algum valor repetido no vetor e qual e esse valor\n", TAM);
    for(int i = 0; i < TAM; i++){
        scanf("%d", &vet[i]);
    }
    
    // Ordenação por seleção
    for(int i = 0; i < TAM - 1; i++){
        int min = i; // índice do menor elemento
        for(int j = i + 1; j < TAM; j++) {
            if(vet[j] < vet[min]) {
                min = j; // atualiza o índice do menor elemento
            }
        }
        // troca o elemento na posição i com o menor elemento
        int temp = vet[i];
        vet[i] = vet[min];
        vet[min] = temp;
    }
    
    // Remoção de duplicados
    int tam = TAM; // tamanho atual do vetor
    for(int i = 0; i < tam - 1; i++){
        if(vet[i] == vet[i+1]) { // se há uma repetição
            repeticao = 1;
            marcados[i] = vet[i];
            // desloca os elementos seguintes para a esquerda
            for(int j = i + 1; j < tam - 1; j++) {
                vet[j] = vet[j+1];
            }
            tam--; // reduz o tamanho do vetor
            i--; // volta uma posição para não pular nenhum elemento
        }
    }
    
    if(repeticao == -1) {
        printf("No vetor NAO HA valores repetidos\n");
    }
    else{
        printf("No vetor HA repeticoes\nOs valores repetidos sao:\n");
        for(int i = 0; i < TAM; i++) {
            if(marcados[i] != 0) {
                printf("O valor que se repete e: %d\n", marcados[i]);
            }
        }
    }
    
    return 0;
    
}
