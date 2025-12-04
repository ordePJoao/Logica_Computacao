#include <stdio.h>

int main()
{

    int casos;
    while (scanf("%d", &casos) != EOF)
    {

        int lesmas[casos];
        int maior = 0;
        for (int i = 0; i < casos; i++)
        {
            scanf("%d", &lesmas[i]);

            if (lesmas[i] > maior)
            {
                maior = lesmas[i];
            }
        }

        if (maior < 10)
        {
            maior = 1;
            printf("%d\n", maior);
        }
        else if (maior >= 10 && maior < 20)
        {
            maior = 2;
            printf("%d\n", maior);
        }
        else
        {
            maior = 3;
            printf("%d\n", maior);
        }
    }

    return 0;
}