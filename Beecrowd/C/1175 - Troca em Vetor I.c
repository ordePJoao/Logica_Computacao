#include <stdio.h>

int main()
{
	int vetor[20];
	for (int i = 0; i < 20; i++)
	{
		scanf("%d", &vetor[i]);
	}

	for (int i = 0, j = 19; i < 10; i++, j--)
	{
		int aux = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = aux;
	}

	for (int i = 0; i < 20; i++)
	{
		printf("N[%d] = %d\n", i, vetor[i]);
	}

	return 0;
}