#include <stdio.h>

int main() {
    int tam = 5;
    int A[tam], B[tam];
    
    printf("Insira %d numeros para construcao do vetor A.\nEste vetor ira gerar um vetor B, o qual tera os valores de A elevados ao quadrado (2).\n", tam);
    
    for(int i = 0; i < tam; i++) {
        scanf("%d", &A[i]);
        B[i] = A[i]*A[i];
    }
    
    printf("O vetor B gerado e: ");
    for(int i = 0; i < tam; i++) {
        printf("%d ", B[i]);
    }
    
}