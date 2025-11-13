#include <stdio.h>

int main()
{
	int casos;
	scanf("%d", &casos);

	for (int i = 0; i < casos; i++)
	{

		int aMenor, bMaior;
		double aCresc, bCresc;
		scanf("%d %d %lf %lf", &aMenor, &bMaior, &aCresc, &bCresc);

		int qtdA = aMenor, qtdB = bMaior;
		int anos = 0;
		do
		{
			{
				if (qtdA > qtdB)
				{
					break;
				}
				if (anos > 100)
				{
					break;
				}

				qtdA = qtdA + (qtdA * (aCresc / 100));
				qtdB = qtdB + (qtdB * (bCresc / 100));
				anos++;
			}

		} while (1);

		if (anos > 100)
		{
			printf("Mais de 1 seculo.\n", anos);
		}

		else
		{
			printf("%d anos.\n", anos);
		}
	}

	return 0;
}