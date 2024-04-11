//
// Created by MarquesV on 07/03/2024.
//

#include <stdio.h>
#define TAM 10


int main() {

    int vet[TAM], primos[TAM];

    printf("Preencha o vetor de %d posicoes: \n", TAM);
    for(int i = 0; i < TAM; i++) {
       scanf("%d", &vet[TAM]);

       if(vet[i] % 2 == 0) {
           int countDivisores = 0;
           do {
               vet[i] = vet[i] + 1;

               for(int j = 1; j <= vet[i]; j++) {
                   if(vet[i] % j == 0) {
                       countDivisores++;
                   }
               }


           } while (countDivisores > 2);
       }
    }

    printf("O vetor resultante e: ");

    for(int i = 0; i < TAM; i++) {
        printf("%d ", vet[i]);
    }

return 0;

}