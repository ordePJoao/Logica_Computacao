#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int casos;
    scanf("%d", &casos);

    char numeros[1002];
    char numeros2[1002];
    for (int i = 0; i < casos; i++)
    {
        scanf(" %s", &numeros);
        scanf(" %s", &numeros2);

        int tam1 = strlen(numeros);
        int tam2 = strlen(numeros2);

        if (tam1 < tam2)
        {
            printf("nao encaixa\n");
            continue;
        }

        if (strcmp(numeros + (tam1 - tam2), numeros2) == 0)
        {
            printf("encaixa\n");
        }
        else
        {
            printf("nao encaixa\n");
        }
    }

    return 0;
}