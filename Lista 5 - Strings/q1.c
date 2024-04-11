#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define QTDALUNOS 5
#define TAMSTRING 100

int main() {

    int nota, maiorNota = 0;
    char nome[TAMSTRING], alunoMaiorNome[TAMSTRING];
    
    for(int i = 0; i < QTDALUNOS; i++) {
        do{
            printf("Insira a nota do aluno %d (nota maxima = 10)\n", i + 1);
            scanf("%d", &nota);
            
            if(nota < 0 || nota > 10) {
                printf("\nDigite uma nota valida (valor inteiro maior ou igual a 0 e menor que 10)\n\n");
            }
        } while (nota < 0 || nota > 10);


        printf("Insira o nome do aluno %d: \n", i + 1);
        scanf("%s", nome);
        
        if(nota > maiorNota) {
            maiorNota = nota;
            strcpy(alunoMaiorNome, nome);
        }
    }
    
    printf("O aluno com maior nota e: %s (nota %d)", alunoMaiorNome, maiorNota);
    
    


}



