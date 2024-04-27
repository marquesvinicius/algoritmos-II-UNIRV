/*
     5) Preencha um vetor de 50 posições com valores aleatórios, em seguida através de uma
    função verifique quais números são primos, imprima esses valores.
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 50
#define LIMIT 101

void preencheVetorAleatorio(int vet[TAM]) {
    for(int i = 0; i < TAM; i++){
        vet[i] = rand() % LIMIT;
    }
}

void imprimeVetor(int vet[TAM]) {
    for(int i = 0; i < TAM; i++){
        printf("%d ", vet[i]);
    }
}

int ePrimo(int number) {
    if (number <= 1) return 0; // se o numero for menor ou igual a 1 então nao é primo.
    int i;

    for (i = 2;  i * i <= number; i++) {
        if (number % i == 0) return 0;
    }

    return 1;
}

void imprimePrimos(int vet[TAM]) {
    for(int i = 0; i < TAM; i++) {
        if(ePrimo(vet[i]))
            printf("%d ", vet[i]);
    }
}

int main() {
    srand(time(NULL));

    int vet[TAM];

    preencheVetorAleatorio(vet);
    printf("O vetor original e:\n");
    imprimeVetor(vet);

    printf("\nOs primos desse vetor sao:\n");
    imprimePrimos(vet);

    return 0;

}

