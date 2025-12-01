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
        int diagonal = 0;
        for (int i = 0; i < x; i++)
        {
            int Nes = diagonal + 1; // valor maximo esquerda (distancia)
            int Ndi = 2;            // valor minimo direita
            for (int j = 0; j < x; j++)
            {
                if (j == diagonal && i == diagonal)
                {
                    matriz[i][j] = 1;
                }

                else if (j > diagonal)
                {
                    matriz[i][j] = Ndi;
                    Ndi++;
                }
                else
                {
                    matriz[i][j] = Nes;
                    Nes--;
                }
            }

            diagonal++;
        }

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < x; j++)
            {
                if (j == 0)
                {
                    printf("%3d", matriz[i][j]);
                }
                else
                {
                    printf(" %3d", matriz[i][j]);
                }
            }

            printf("\n");
        }

        printf("\n");

    } while (1);

    return 0;
}