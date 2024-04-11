//
// Created by MarquesV on 07/03/2024.
//

#include <stdio.h>
#define TAM 10


int main() {

    int vet[TAM];
    int countDivisores;

    printf("Preencha o vetor de %d posicoes: \n", TAM);
    for(int i = 0; i < TAM; i++) {
        countDivisores = 0;
        scanf("%d", &vet[i]);

        while (vet[i] % 2 == 0) {
            vet[i] = vet[i] + 1;

            for(int j = 2; j <= vet[i]; j++) {
                if(vet[i] % j == 0) {
                    countDivisores++;
                }
            }

            if(countDivisores <= 2) {
                vet[i] = vet[i];
                break;
            }
        }


    }

    printf("O vetor resultante e: ");

    for(int i = 0; i < TAM; i++) {
        printf("%d ", vet[i]);
    }



}