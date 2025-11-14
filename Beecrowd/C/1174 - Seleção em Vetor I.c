#include <stdio.h>

int main()
{
	double vetor[100];
	for (int i = 0; i < 100; i++)
	{
		scanf("%lf", &vetor[i]);

		if (vetor[i] <= 10.0)
		{
			printf("A[%d] = %.1lf\n", i, vetor[i]);
		}
	}

	return 0;
}