/*
    4) Crie um algoritmo utilizando matriz para imprimir o calendário do mês de março.
    Ex. de impressão:
 */

#include <stdio.h>
#define TAMLINHA 6
#define TAMCOL 7

int main() {
    int mat[TAMLINHA][TAMCOL] = {0, 0, 0, 0, 0, 1, 2,
                                 3, 4, 5, 6, 7, 8, 9,
                                 10, 11, 12, 13, 14, 15, 16,
                                 17, 18, 19, 20, 21, 22, 23,
                                 24, 25, 26, 27, 28, 29, 30,
                                 31, 0, 0, 0, 0, 0, 0};

    printf("Marco de 2024:\n");
    printf("Dom  Seg  Ter  Qua  Qui  Sex  Sab\n");

    for(int i = 0; i < TAMLINHA; i++) {
        for(int j = 0; j < TAMCOL; j++) {
            if(mat[i][j] == 0)
                printf("     "); // 5 espaços para dias vazios
            else
                printf("%2d   ", mat[i][j]); // 2 espaços para números e 3 espaços após o número
        }
        printf("\n");
    }

    return 0;
}
