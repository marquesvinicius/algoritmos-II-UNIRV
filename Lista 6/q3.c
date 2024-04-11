//
// Created by MarquesV on 08/03/2024.
//

#include <stdio.h>
#define TAM 10


int main () {

    int vetA[TAM], vetB[TAM];


    printf("Insira os valores que irao compor o vetor de tamanho %d\n", TAM);
    for(int i = 0; i < TAM; i++) {
        scanf("%d", &vetA[i]);
    }

    for(int i = 0; i < TAM; i++) {
        if(i % 2 == 0) {
            vetB[i] = vetA[i] * 3;
        }

        else {
            vetB[i] = vetA[i] * 2;
        }
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