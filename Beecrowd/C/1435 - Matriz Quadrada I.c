#include <stdio.h>

int main()
{

    do
    {
        int x;
        scanf("%d", &x);
        if (x == 0)
        {
            break;
        }

        int matriz[x][x];

        for (int i = 0; i < x; i++) // numerar matriz
        {
            for (int j = 0; j < x; j++)
            {
                matriz[i][j] = 1;
            }
        }

        for (int nivelMatriz = (x - 1); nivelMatriz > 0; nivelMatriz--) // matrizes dentro
        {
            for (int i = (x - nivelMatriz); i < nivelMatriz; i++)
            {
                for (int j = (x - nivelMatriz); j < nivelMatriz; j++)
                {
                    matriz[i][j]++;
                }
            }
        }

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < x; j++)
            {
                if (j == 0)
                {
                    // Primeiro elemento: usa o alinhamento de 3 espaços, sem espaço inicial.
                    printf("%3d", matriz[i][j]); 
                }
                else
                {
                    // Demais elementos: um espaço de separação + alinhamento de 3 espaços.
                    printf(" %3d", matriz[i][j]); 
                }
            }
            printf("\n"); // Quebra de linha após o final de cada linha
        }
        
        printf("\n");

    } while (1);

    return 0;
}