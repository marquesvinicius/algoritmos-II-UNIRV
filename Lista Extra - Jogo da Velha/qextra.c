//
// Created by MarquesV on 22/03/2024.
//

#include <stdio.h>
#include <stdlib.h>
#define TAMLINHA 3
#define TAMCOL 3

void imprimeJogo(char jogo[TAMLINHA][TAMCOL]) {
    for(int i = 0; i < TAMLINHA; i++) {
        for(int j = 0; j < TAMCOL; j++) {
            if(j == 2)
                printf("%c\n", jogo[i][j]);
            else
                printf("%c | ", jogo[i][j]);


        }
    }
}

/*Funcoes de verificacao abaixo
Essas funcoes retornam 1 caso o ‘X’ venca, 2 caso o ‘O’ venca e 0 caso nao haja vencedores na jogada*/

int verificaLinhas(char jogo[TAMLINHA][TAMCOL]){
    for(int i = 0; i < TAMLINHA; i++){
        if(jogo[i][0] == jogo[i][1] && jogo[i][1] == jogo[i][2]){
            if(jogo[i][0] == 'X')
                return 1;
            else if(jogo[i][0] == 'O')
                return 2;
        }
    }
    return 0;
}

int verificaColunas(char jogo[TAMLINHA][TAMCOL]){
    for(int j = 0; j < TAMCOL; j++){
        if(jogo[0][j] == jogo[1][j] && jogo[1][j] == jogo[2][j]){
            if(jogo[0][j] == 'X')
                return 1;
            else if(jogo[0][j] == 'O')
                return 2;
        }
    }
    return 0;
}

int verificaDiagonalPrincipal(char jogo[TAMLINHA][TAMCOL]){
    if(jogo[0][0] == jogo[1][1] && jogo[1][1] == jogo[2][2]){
        if(jogo[0][0] == 'X')
            return 1;
        else if(jogo[0][0] == 'O')
            return 2;
    }
    return 0;
}

int verificaDiagonalSecundaria(char jogo[TAMLINHA][TAMCOL]){
    if(jogo[0][2] == jogo[1][1] && jogo[1][1] == jogo[2][0]){
        if(jogo[0][2] == 'X')
            return 1;
        else if(jogo[0][2] == 'O')
            return 2;
    }
    return 0;
}


int main() {

    char jogo[TAMLINHA][TAMCOL] = {' ', ' ', ' ',
                                   ' ', ' ', ' ',
                                   ' ', ' ', ' '};

    int controlador = 1,  linha, coluna, contaJogadas = 0;;

    while (controlador) {

        if(contaJogadas % 2 == 0) {
            printf("Digite a posicao para o X (0 a %d):", TAMLINHA - 1);
            scanf("%d %d", &linha, &coluna);
            if(jogo[linha][coluna] == ' '){
                jogo[linha][coluna] = 'X';
                contaJogadas++;
            }

            else
                printf("A posicao que voce inseriu [%d, %d] esta ocupada! Tente novamente\n", linha, coluna);
        }
        else {
            printf("Digite a posicao para o O (0 a %d):", TAMLINHA - 1);
            scanf("%d %d", &linha, &coluna);
            if(jogo[linha][coluna] == ' '){
                jogo[linha][coluna] = 'O';
                contaJogadas++;
            }
            else
                printf("A posicao que voce inseriu [%d, %d] esta ocupada! Tente novamente\n", linha, coluna);
        }
        imprimeJogo(jogo);

        if(verificaLinhas(jogo) == 1 || verificaColunas(jogo) == 1 ||
           verificaDiagonalPrincipal(jogo) == 1 || verificaDiagonalSecundaria(jogo) == 1) {
            controlador = 0;
            printf("\nX venceu!!!\n");
        }

        if(verificaLinhas(jogo) == 2 || verificaColunas(jogo) == 2 ||
           verificaDiagonalPrincipal(jogo) == 2 || verificaDiagonalSecundaria(jogo) == 2) {
            controlador = 0;
            printf("\nO venceu!!!\n");
        }

        if(contaJogadas == 9 && verificaLinhas(jogo) == 0 && verificaColunas(jogo) == 0 &&
           verificaDiagonalPrincipal(jogo) == 0 && verificaDiagonalSecundaria(jogo) == 0){
            controlador = 0;
            printf("\nDeu velha!!! Ninguem venceu\n");
        }

    }



    return 0;
}

