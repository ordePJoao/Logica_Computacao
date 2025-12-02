#include <stdio.h>
#include <math.h>
int nFormato(long long int Numero)
{
    int contador = 0;

    if (Numero == 0)
    {
        return 1;
    }

    while (Numero > 0)
    {
        Numero = Numero / 10;
        contador++;
    }

    return contador;
}

int main()
{
    long long int x;
    do
    {
        scanf("%lld", &x);
        if (x == 0)
        {
            break;
        }
        long long int matriz[x][x];
        long long maior;
        for (int i = 0; i < x; i++)
        {

            for (int j = 0; j < x; j++)
            {

                if (i == 0 && j == 0)
                { // numerando a primeira coluna
                    matriz[i][j] = 1;
                    maior = 1; // caso x == 1
                }
                else if (j == 0)
                { // numerando a primeira coluna
                    matriz[i][j] = matriz[i - 1][j] * 2;
                }
                else
                { // numerando o resto
                    matriz[i][j] = matriz[i][j - 1] * 2;

                    if (i == (x - 1) && j == (x - 1))
                    {
                        maior = matriz[i][j]; // achando o formato do maior
                    }
                }
            }
        }

        int tamanhoFormt = nFormato(maior);

        for (int i = 0; i < x; i++)
        {

            for (int j = 0; j < x; j++)
            {
                if (j != (x - 1))
                {
                    printf("%*lld ", tamanhoFormt, matriz[i][j]);
                }
                else
                {
                    printf("%*lld", tamanhoFormt, matriz[i][j]);
                }
            }

            printf("\n");
        }

        printf("\n");

    } while (1);

    return 0;
}