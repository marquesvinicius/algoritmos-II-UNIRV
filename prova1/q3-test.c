#include <stdio.h>
#include <stdlib.h>
#define TAM 15

int main() {
    int vet[TAM];

    printf("Digite os valores que compoem o vetor (numeros pares nao sao permitidos):\n");

    for (int i = 0; i < TAM; i++) {
        int countDivisores = 0;
        do {
            scanf("%d", &vet[i]);

            for (int j = 1; j <= vet[i]; j++) {
                if (vet[i] % j == 0) {
                    countDivisores++;
                }
            }

            if (countDivisores != 2) {
                vet[i] = vet[i] + 1;
            }

            else {
                vet[i] = vet[i];
                break;
            }
        } while (vet[i] % 2 == 0);
    }

    printf("\nOs valores digitados sao: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}
