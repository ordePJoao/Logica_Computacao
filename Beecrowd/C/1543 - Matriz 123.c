#include <stdio.h>

int main()
{

    int x;
    while (scanf("%d", &x) != EOF)
    {

        int matriz[x][x];
        for (int i = 0; i < x; i++)
        {

            for (int j = 0; j < x; j++)
            {
                matriz[i][j] = 3;
            }
        }

        int N1 = 0, N2 = (x - 1);
        for (int i = 0; i < x; i++)
        {

            for (int j = 0; j < x; j++)
            {

                if (j == N1)
                {
                    matriz[i][j] = 1;
                }

                if (j == N2)
                {
                    matriz[i][j] = 2;
                }

                printf("%d", matriz[i][j]);
            }

            N1++;
            N2--;

            printf("\n");
        }
    }

    return 0;
}