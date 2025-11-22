#include <stdio.h>

int main()
{
    double x;
    scanf("%lf", &x);

    double vetor[100];
    double j = 0;
    for (int i = 0; i < 100; i++)
    {
        if (i == 0)
        {
            vetor[i] = x;
        }
        else
        {
            j = vetor[i - 1] / 2;
            vetor[i] = j;
        }
    }

    for (int i = 0; i < 1000; i++)
    {
        printf("N[%d] = %lf\n", i, vetor[i]);
    }

    return 0;
}