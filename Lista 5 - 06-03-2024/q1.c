//
// Created by MarquesV on 06/03/2024.
//

#include <stdio.h>
#define TAM 15

int main () {
    
    int vet[TAM];
    int vetRepetidos[TAM], tamVetRepetidos = 0;

    printf("Digite os valores que compoem o vetor de tamanho %d\n", TAM);
    for(int i = 0; i < TAM; i++){
        scanf("%d", &vet[i]);
    }
    
    for(int i = 0; i < TAM; i++) {
        int comparador = vet[i];
        for(int j = i + 1; j < TAM + 1; j++) {
            int comparando = vet[j];
            
            if(comparador == comparando) {
                vetRepetidos[tamVetRepetidos] = vet[i];
                tamVetRepetidos++;
            }

        }
    }

    printf("\nOs valores que se repetem sao: ");
    for(int i = 0; i < tamVetRepetidos; i++){
        printf("%d ", vetRepetidos[i]);
    }
    printf("\n");
    
    return 0;
}