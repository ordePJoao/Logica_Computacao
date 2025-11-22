#include <stdio.h>

int main()
{
    int par[5], impar[5], p = 0, imp = 0;
    for (int i = 0; i < 15; i++)
    {
        int x;
        scanf("%d", &x);

        if (x % 2 == 0) // se for par
        {
            if (p < 5)
            {
                par[p] = x;
                p++;
            }
            else
            {
                for (int j = 0; j < 5; j++)
                {
                    printf("par[%d] = %d\n", j, par[j]);
                }

                p = 0;
                par[p] = x;
                p++;
            }
        }

        else
        { // se for impar
            if (imp < 5)
            {
                impar[imp] = x;
                imp++;
            }
            else
            {
                for (int n = 0; n < 5; n++)
                {
                    printf("impar[%d] = %d\n", n, impar[n]);
                }

                imp = 0;
                impar[imp] = x;
                imp++;
            }
        }
    }

    // Imprimir os restantes
    for (int i = 0; i <= imp - 1; i++) // imp-1 ---- Igualar os indices
    {
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for (int i = 0; i <= p - 1; i++)
    {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}