//
// Created by MarquesV on 10/04/2024.
//

/*
    3) Escreva uma função que verifica se um valor é primo ou não.
    Caso o valor informado não seja primo, peça para ser informado outro
    número, até que seja digitado um valor primo.
 */

#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int numero) {
    if (numero <= 1) return 0; // 0 e 1 não são primos
    if (numero % 2 == 0 && numero > 2) return 0; // Exclui números pares maiores que 2
    for (int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0) return 0;
    }
    return 1;
}


int main() {

    int valor;

    do {
        printf("Insira um valor (o programa ira encerrar caso esse valor seja primo)\n");
        scanf("%d", &valor);


    } while (!ehPrimo(valor));

    printf("O valor digitado (%d) e primo. O programa sera encerrado.\n", valor);

    return 0;
}