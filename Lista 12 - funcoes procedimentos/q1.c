//
// Created by MarquesV on 10/04/2024.
//

/*
 * 1) Faça uma função para uma calculadora de um determinado valor, onde o
    usuário vai digitar a operação entre SOMA, SUBTRAÇÃO,
    MULTIPLICAÇÃO e DIVISÃO, em seguida será solicitado o PRIMEIRO e o
    SEGUNDO valor. A função deve retornar o calculo escolhido por esses
    valores.
 *
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 14

int calcular(char *op, int valorA, int valorB) {

    if(strcmp(op, "soma") == 0){
        return valorA + valorB;
    } else if (strcmp(op, "subtracao") == 0){
        return valorA - valorB;
    } else if (strcmp(op, "multiplicacao") == 0){
        return valorA * valorB;
    } else if (strcmp(op, "divisao") == 0){
        return valorA / valorB;
    } else {
        printf("Digite uma operacao valida\n");
    }

    /*switch(op) {
        case 'soma':
            return valorA + valorB;
            break;
    }*/

}

int main() {

    int valorA, valorB;
    char operacao[TAM];

    printf("Digite a operacao que deseja realizar (voce deve digitar: 'soma' ou 'subtracao' ou 'divisao' ou 'multiplicacao' "
           "exatamente como esta escrito aqui\n");

    scanf("%s", operacao);

    printf("Insira os valores para que as operacoes sejam realizadas\n");
    printf("Valor A: ");
    scanf("%d", &valorA);
    printf("Valor B: ");
    scanf("%d", &valorB);



    printf("O resultado da operacao %s e: %d\n", operacao, calcular(operacao, valorA, valorB));

    return 0;
}