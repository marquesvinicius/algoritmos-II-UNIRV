//
// Created by MarquesV on 04/04/2024.
//
/*
 * Exercício 1 - Procedimentos

    Escreva um procedimento que imprima todos os números de 1 a
    10.
    Escreva um procedimento que imprima todos os números pares de
    0 a 100.
    Escreva um procedimento que mostre na tela toda a tabuada do 5.
    Exemplo:
    5 x 1 = 5
    5 x 2 = 10
    5 x 3 = 15...
    5 x 10 = 50
 *
 *
 * */

#include <stdio.h>
#include <stdlib.h>

void imprime1a10() {
    for(int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void imprimePares() {
    for(int i = 0; i <= 100; i++) {
        if(i%2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void imprimeTabuada() {
    for(int i = 1; i <= 10; i++) {
        printf("5 x %d = %d\n", i, i * 5);
    }
    printf("\n");
}

int main() {
    printf("--- Questao A ---\n");
    imprime1a10();

    printf("--- Questao B ---\n");
    imprimePares();

    printf("--- Questao C ---\n");
    imprimeTabuada();

    return 0;
}