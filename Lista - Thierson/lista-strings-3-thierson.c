//
// Created by MarquesV on 01/03/2024.
//

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char frase[10000];
    int countLetra, countVogal, countConsoante;

    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        countLetra = 0;
        countVogal = 0;
        countConsoante = 0;
        scanf("%[^\n]", frase);
        for (int j = 0; j < strlen(frase); j++) {
            if ((frase[j] >= 'a' && frase[j] <= 'z') || (frase[j] >= 'A' && frase[j] <= 'Z')) {
                countLetra++;

                if (frase[j] == 'A' || frase[j] == 'E' || frase[j] == 'I' || frase[j] == 'O' || frase[j] == 'U' || frase[j] == 'a' || frase[j] == 'e' || frase[j] == 'i' || frase[j] == 'o' || frase[j] == 'u') {
                    countVogal++;
                } else {
                    countConsoante++;
                }


            }


        }

        printf("Letras = %d\n", countLetra);
        printf("Vogais = %d\n", countVogal);
        printf("Consoantes = %d\n", countConsoante);
        break;
    }

    return 0;
}