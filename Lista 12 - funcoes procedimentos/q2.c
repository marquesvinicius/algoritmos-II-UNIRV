//
// Created by MarquesV on 10/04/2024.
//

#include <stdio.h>
#include <stdlib.h>

/*
 * 2) Faça um programa que leia a altura e o sexo (codificado da seguinte forma:
    F-feminino M-masculino) de uma pessoa. Depois faça uma função chamada
    PesoIdeal que receba a altura e o sexo via parâmetro e que calcule e retorne
    seu peso ideal, utilizando as seguintes fórmulas:
    • para homens : (72.7 * h) – 58
    • para mulheres : (62.1 * h) – 44.7
    Observação: Altura = h (na fórmula acima)
 *
 * */

float pesoIdeal(char sexo, float altura) {
    if(sexo == 'M')
        return (72.7 * altura)  - 58;
    if(sexo == 'F')
        return (62.1 * altura) - 44.7;
    else
        printf("Digite um sexo valido");
    return 0;
}




int main() {

    char sexo;
    float altura;

    printf("Digite o sexo da pessoa em questao (F p/ feminino, M p/ masculino)\n");
    scanf("%c", &sexo);

    printf("Agora digite a altura da pessoa em questao\n");
    scanf("%f", &altura);

    printf("O peso ideal da pessoa em questao deve ser: %.2f", pesoIdeal(sexo, altura));

    return 0;
}