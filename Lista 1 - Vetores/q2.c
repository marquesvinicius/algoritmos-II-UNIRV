#include <stdio.h>

int main() {
    int tam = 15, valor, posicao = -1;
    int vet[tam];
    
    
    printf("Digite %d numeros nao repetidos (de 0 a 50) para construir o vetor\n", tam);
    for(int i = 0; i < tam; i++) {
        scanf("%d", &vet[i]);
    }
    
    printf("Digite o valor a ser encontrado no vetor inserido: ");
    scanf("%d", &valor);
    
    while(valor <= 0 || valor >= 50) {
        printf("Valor invalido. Informe novamente: ");
        scanf("%d", &valor);    
    }
    
    for(int i = 0; i < tam; i++) {
        if(vet[i] == valor) {
            posicao = i + 1;
        }
    }
    
    if(posicao != -1) {
        printf("Valor encontrado no vetor na posicao: %d, indice: %d\n", posicao, posicao - 1);
    }
    
    else {
        printf("Valor nao encontrado!\n");
    }
    
    return 0;
    
    
}

