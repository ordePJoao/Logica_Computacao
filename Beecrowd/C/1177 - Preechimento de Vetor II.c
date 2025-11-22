#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int vetor[1000];
    for (int i = 0, j = 0; i < 1000; i++, j++)
    {
        if (j == x)
        {
            j = 0;
        }

        vetor[i] = j;
    }

    for (int i = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}