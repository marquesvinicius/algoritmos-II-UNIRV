//
// Created by MarquesV on 04/04/2024.
//

/*
 *  Exercício 3 - Funções

    Escreva uma função que retorne o quadrado de um número inteiro
    qualquer Exemplo:

    5 = 25
    7 = 49

    Escreva uma função que retornará true caso o valor seja múltiplo
    de 3 ou false, caso contrário
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int calculaQuadrado(int num) {
    return num * num;
}

bool defineMultiploDeTres(int num) {
    if(num % 3 == 0)
        return true;
    return false;
}

int main() {

    printf("a) A funcao abaixo calcula o quadrado do numero como referencia\n");
    printf("O quadrado de 8 e %d\n\n", calculaQuadrado(8));

    printf("b) A funcao abaixo define se o valor de referencia e multiplo de tres ou nao, e retorna 'true' se sim, e 'false' se nao\n");
    printf("27 = %s\n", defineMultiploDeTres(27) ? "true"  : "false");
    printf("29 = %s\n", defineMultiploDeTres(29) ? "true"  : "false");

    return 0;
}