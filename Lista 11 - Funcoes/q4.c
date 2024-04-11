//
// Created by MarquesV on 04/04/2024.
//

/*
 *  Exercício 4 - Funções

    Escreva uma função que retorne o dobro de um número passado
    como parâmetro.
    Escreva uma função que verifique se um número passado como
    parâmetro é par ou ímpar.
 */

#include <stdio.h>
#include <stdlib.h>

int calculaDobro(int num) {
    return num * 2;
}

char* defineParidade(int num) {
    if(num % 2 == 0)
        return "true";

    return "false";
}

int main () {
    printf("O dobro de 8 e: %d\n", calculaDobro(8));
    printf("9 e par? %s ", defineParidade(9));
    printf("\n");

    return 0;

}