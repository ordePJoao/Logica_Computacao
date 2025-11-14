#include <stdio.h>

int main()
{

	int casos;
	scanf("%d", &casos);

	for (int i = 0; i < casos; i++)
	{
		int x;
		scanf("%d", &x);

		if (x == 0)
		{
			printf("%d nao eh primo\n", x);
		}

		else if (x == 1 || x == 2)
		{
			printf("%d eh primo\n", x);
		}

		else
		{
			for (int j = 2; j < x; j++)
			{
				if (x % j == 0)
				{
					printf("%d nao eh primo\n", x);
					break;
				}
				else if (x % j != 0 && j == (x - 1))
				{
					printf("%d eh primo\n", x);
				}
				else
				{
					continue;
				}
			}
		}
	}
	return 0;
}