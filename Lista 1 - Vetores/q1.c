#include <stdio.h>

int main()
{
    int i, multiplicador, resultado;
    
    int vet[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    printf("Digite o numero do qual voce deseja visualizar a tabuada do 1 ao 10: ");
    scanf("%d", &multiplicador);
    
    for(i = 1; i <= 10; i++) {
        resultado = i * multiplicador;
        printf("O resultado de %d x %d equivale a: %d\n", multiplicador, i, resultado);
    }
    
    return 0;
}