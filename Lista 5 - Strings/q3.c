#include <stdio.h>
#include <string.h>
#define TAM 5


int main() {

	int idades[TAM], indiceMaiorIdade, indiceMenorIdade, maiorIdade = 0, menorIdade = 9999;
	char nomes[TAM][20];

	for(int i = 0; i < TAM; i++){
		printf("Digite o nome da pessoa %d: ", i + 1);
		scanf("%s", nomes[i]);
		printf("Digite uma idade valida para a pessoa %d: ", i + 1);
		scanf("%d", &idades[i]);

		if(idades[i] > maiorIdade) {
			maiorIdade = idades[i];
			indiceMaiorIdade = i;
		}

		if(idades[i] < menorIdade) {
			menorIdade = idades[i];
			indiceMenorIdade = i;
		}
	}

	printf("A pessoa mais velha da lista e: %s (%d anos)\n", nomes[indiceMaiorIdade], idades[indiceMaiorIdade]);
	printf("A pessoa mais nova da lista e: %s (%d anos)\n", nomes[indiceMenorIdade], idades[indiceMenorIdade]);


	return 0;
}