#include <stdio.h>

double cMedia(double n1, double n2)
{
    return (n1 + n2) / 2.0;
}

int main()
{

    double notas[2];
    for (int i = 0; i < 2;)
    {
        scanf("%lf", &notas[i]);
        if (notas[i] < 0.0 || notas[i] > 10.0)
        {
            printf("nota invalida\n");
        }
        else
        {
            i++;
        }
    }

    printf("media = %.2lf\n", cMedia(notas[0], notas[1]));
    return 0;
}
