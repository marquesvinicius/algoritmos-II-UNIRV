//
// Created by MarquesV on 29/02/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TAM 5

int main() {
    char nomes[TAM][100];
    char sexo[TAM];
    int idades[TAM];

    for (int i = 0; i < TAM; i++) {

        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", nomes[i]);
        getchar();
        do {
            printf("Digite o sexo da pessoa %d (M = Masculino, F = Feminino): ", i + 1);
            scanf("%c", &sexo[i]);
            getchar();
        } while (sexo[i] != 'F' && sexo[i] != 'M');
        sexo[i] = toupper(sexo[i]);
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
        getchar();

    }

    for (int i = 0; i < TAM; i++) {
        switch (sexo[i]) {
            case 'F':
                printf("%s ESTA DISPENSADA DO SERVICO OBRIGATORIO\n", nomes[i]);
                break;
            case 'M':
                if (idades[i] == 18) {
                    printf("%s DEVE SE ALISTAR\n", nomes[i]);
                } else if (idades[i] < 18) {
                    printf("%s NAO ATINGIU A idades DE SE ALISTAR\n", nomes[i]);
                } else if (idades[i] > 18) {
                    printf("%s ESTA NA RESERVA\n", nomes[i]);
                }
                break;
            default:
                printf("Sexo invalido\n");
                break;
        }
    }


    return 0;
}