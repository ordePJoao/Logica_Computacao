#include <stdio.h>

int main()
{
    int casos;
    scanf("%d", &casos);

    for (int i = 0; i < casos; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        int soma = 0, nI = x, j = 0;
        while (j != y)
        {
            if (nI % 2 != 0)
            {
                soma = soma + nI;
                j++;
            }

            nI++;
        }

        printf("%d\n", soma);
    }

    return 0;
}