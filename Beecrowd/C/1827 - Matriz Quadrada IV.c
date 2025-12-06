#include <stdio.h>

int main()
{

    int largura;
    while (scanf("%d", &largura) != EOF)
    {
        if (largura % 2 == 0)
        {
            continue;
        }

        int matriz[largura][largura];

        // Inicializa a matriz com zeros
        for (int i = 0; i < largura; i++)
        {

            for (int j = 0; j < largura; j++)
            {
                matriz[i][j] = 0;
            }
        }

        int dPrincipal = 0;
        int dSecundaria = largura - 1;
        int vlrInterno = largura / 3;
        int vlrMeio = largura / 2;

        //preenche o resto da matriz
        for (int i = 0; i < largura; i++)
        {

            for (int j = 0; j < largura; j++)
            {

                if (j == dPrincipal)
                { // Diagonal principal
                    matriz[i][j] = 2;
                }
                if (j == dSecundaria)
                { // Diagonal secundaria
                    matriz[i][j] = 3;
                }

                if (i >= vlrInterno && i <= (largura - vlrInterno - 1))
                { // Extremidades para matriz interna (indice minimo e maximo)
                    if (j >= vlrInterno && j <= (largura - vlrInterno - 1))
                    {
                        matriz[i][j] = 1;
                    }
                }

                if (i == vlrMeio && j == vlrMeio)
                { // Centro da matriz
                    matriz[i][j] = 4;
                }
            }

            dPrincipal++;
            dSecundaria--;
        }

        for (int i = 0; i < largura; i++)
        {

            for (int j = 0; j < largura; j++)
            {

                printf("%d", matriz[i][j]);
            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}