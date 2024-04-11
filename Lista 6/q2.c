//
// Created by MarquesV on 08/03/2024.
//

#include <stdio.h>
#define TAM 5


int main () {


    int vetA[TAM];
    int maiorValor = 0;


    printf("Insira os valores do vetor de tamanho %d\n", TAM);
    for(int i = 0; i < TAM; i++) {
        scanf("%d", &vetA[i]);

        if(vetA[i] > maiorValor) {
            maiorValor = vetA[i];
        }
    }

    int vetB[TAM];

    for(int i = 0; i < TAM; i++) {
        vetB[i] = vetA[i] * maiorValor;
    }

    printf("Os dois vetores sao:\n");
    printf("Vetor A (original): ");

    for(int i = 0; i < TAM; i++) {
        printf("%d ", vetA[i]);
    }


    printf("\nVetor B (resultante): ");
    for(int i = 0; i < TAM; i++) {
        printf("%d ", vetB[i]);
    }



    return 0;
}