//
// Created by MarquesV on 07/03/2024.
//

#include <stdio.h>
#define TAM 10


int main() {

    int vet[TAM];

    printf("Preencha o vetor de %d posicoes: \n", TAM);
    for(int i = 0; i < TAM; i++) {
        scanf("%d", &vet[i]);

        if(vet[i] % 2 == 0) {
            int j;
            if(j = 2; j * j <= vet[i]; j++){
                if (num % j == 0) {
                    break;
                }
           }

        }


    }

    printf("O vetor resultante e: ");

    for(int i = 0; i < TAM; i++) {
        printf("%d ", vet[i]);
    }



}