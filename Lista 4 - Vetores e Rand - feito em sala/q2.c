// Este programa em C gera um vetor de 50 inteiros aleatórios entre 0 e 100 e imprime a quantidade e os valores dos números primos no vetor

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 50
#define LIMIT 100

int
main ()
{

  srand (time (NULL));

  int vet[TAM], countDivisores, primosTAM = 0;

  for (int i = 0; i < TAM; i++)
	{
	  vet[i] = rand () % LIMIT;
	}
	
	printf("O vetor gerado eh: ");
	
	for(int i = 0; i < TAM; i++) {
	    printf("%d ", vet[i]);
	}
	
	printf("\n");

  for (int i = 0; i < TAM; i++)
	{
	  countDivisores = 0;
	  for (int j = 1; j <= vet[i]; j++)
		{
		  if (vet[i] % j == 0)
			{
			  countDivisores++;
			}
		}

	  if (countDivisores == 2)
		{
		  primosTAM++;
		}
	}

  if (primosTAM > 0)
	{
	  printf ("ha numeros primos. eles sao: ");

	  for (int i = 0; i < TAM; i++)
		{
		  countDivisores = 0;
		  for (int j = 1; j <= vet[i]; j++)
			{
			  if (vet[i] % j == 0)
				{
				  countDivisores++;
				}
			}

		  if (countDivisores == 2)
			{
			  printf ("%d ", vet[i]);
			}
		}
	}

  else
	{
	  printf ("nao ha numeros primos\n");
	}

  return 0;



}