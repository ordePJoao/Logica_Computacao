#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int pessoas;
    scanf("%d", &pessoas);

    int ident[pessoas]; // Pessoas que chegaram
    for (int i = 0; i < pessoas; i++)
    {
        scanf("%d", &ident[i]);
    }

    int Spessoas;
    scanf("%d", &Spessoas);

    int saiu[100002] = {0}; // Contabilizando pessoas que sumiram
    for (int i = 0; i < Spessoas; i++)
    {
        int idSaiu;
        scanf("%d", &idSaiu);

        saiu[idSaiu] = 1;
    }

    for (int i = 0; i < pessoas; i++) // Printando resultado
    {
        int idCompara = ident[i];
        if (saiu[idCompara] == 1)
        {
            continue;
        }

        else
        {
            if (i == pessoas - 1)
            {
                printf("%d\n", ident[i]);
            }
            else
            {
                printf("%d ", ident[i]);
            }
        }
    }

    return 0;
}