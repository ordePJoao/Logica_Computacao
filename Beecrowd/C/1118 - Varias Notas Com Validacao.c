#include <stdio.h>

double cMedia(double n1, double n2)
{
    return (n1 + n2) / 2.0;
}

int main()
{
    int esteira = 1;
    while (esteira == 1)
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

        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &esteira);
        while (esteira != 1 && esteira != 2)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &esteira);
        }

        if (esteira == 2)
        {
            break;
        }
    }

    return 0;
}