//
// Created by MarquesV on 04/04/2024.
//

/*
 *  Exercício 2 - Procedimentos

    Criar um procedimento que deve receber um valor inteiro positivo
    como parâmetro e exibir se o valor informado pelo usuário é par ou
    ímpar.
    Escreva um procedimento que imprima a tabuada de um número
    inteiro dado como entrada.
    Crie um procedimento que imprima todos os números ímpares
    entre dois números inteiros dados como entrada e outro
    procedimento com valores pares. Após isso faça a chamada de
    ambos os procedimentos.
 *
 * */

#include <stdio.h>
#include <stdlib.h>

void defineParidade(int num) {
    printf("O valor que inseriu (%d) e: ", num);
    if(num % 2 == 0) {
        printf("par");
    } else {
        printf("impar");
    }
    printf("\n");
}

void imprimeTabuada(int num) {
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, num * i);
    }
    printf("\n");

}

void imprimeParesNoIntervalo(int limiteBaixo, int limiteAlto) {
    for(int i = limiteBaixo; i <= limiteAlto; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

}

void imprimeImparesNoIntervalo(int limiteBaixo, int limiteAlto) {
    for(int i = limiteBaixo; i <= limiteAlto; i++) {
        if(i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main () {
    printf("\na) O procedimento abaixo define se o numero passado como referencia e par ou impar\n");
    defineParidade(4);

    printf("\nb) O procedimento abaixo imprime a tabuada do numero passado como referencia\n");
    imprimeTabuada(7);

    printf("\nc) O procedimento abaixo imprime os numeros pares no intervalo entre os numeros inseridos como referencia (LIMITES INCLUSOS)\n");
    imprimeParesNoIntervalo(2, 89);

    printf("\nd) O procedimento abaixo imprime os numeros impares no intervalo entre os numeros inseridos como referencia (LIMITES INCLUSOS)\n");
    imprimeImparesNoIntervalo(2, 89);

    return 0;
}