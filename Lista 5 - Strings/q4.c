#include <stdio.h>
#include <string.h>

int main() {

	char palavra[50], countA = 0;

    printf("Digite a palavra que tera as letras A substituidas: ");
	scanf("%s", palavra);

	for(int i = 0; i < strlen(palavra); i++) {
		if(palavra[i] == 'A' || palavra[i] == 'a') {
			palavra[i] = '*';
			countA++;
		}
	}

	if(countA == 0) {
		printf("A palavra nao possui a letra A\n");
	} else {
		printf("A palavra com a letra A substituida por * fica: %s\n", palavra);
	}

	return 0;
}