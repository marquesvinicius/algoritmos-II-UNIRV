#include <stdio.h>
#define TAM 10

int main()
{
    int vet[TAM];
    
    printf("Insira %d valores para a criacao do vetor:\n", TAM);
    
    for(int i = 0; i < TAM; i++) {
        scanf("%d", &vet[i]);
    }
    
    printf("O vetor na ordem inversa e:\n");
    
    for(int i = TAM - 1; i >= 0; i--){
        printf("%d ", vet[i]);
    }
    
    return 0;
}
