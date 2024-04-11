#include <stdio.h>
#define TAM 5

int main() {
    
    int vet[TAM], count = 0;
    
    printf("Digite %d notas:\n", TAM);
    
    for(int i = 0; i < TAM; i++) {
        scanf("%d", &vet[i]);
        
        if(vet[i] >= 60) {
            count++;
        }
    }
    
    printf("A quantidade de notas acima ou iguais a 60 sao: %d\nAs notas acima ou iguais a 60 sao: ", count);
    for(int i = 0; i < TAM; i++) {
        if(vet[i] >= 60) {
            printf("%d ", vet[i]);    
        }
    }
    
    return 0;
}