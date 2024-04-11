//
// Created by MarquesV on 06/03/2024.
//

#include <stdio.h>
#include <stdlib.h>
#define TAM 15

int ePrimo (int n) {
    int count = 0;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            count++;
        }
    }

    if(count == 2) {
        return 1;
    }

    return 0;
}

int main() {

    int vet[TAM];

    printf("Digite os valores que compoem o vetor (numeros primos nao sao permitidos):\n");

    for(int i = 0; i < TAM; i++) {
        do{
            scanf("%d", &vet[i]);

            if(ePrimo(vet[i])) {
                printf("Valor invalido. %d e primo!!! Insira um novo valor:\n", vet[i]);
            }
        } while (ePrimo(vet[i]));

    }

    for(int i = 0; i < TAM; i++) {

        printf("%d ", vet[i]);
    }

    return 0;

}