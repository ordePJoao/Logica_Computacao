#include <stdio.h>

double Soma(int nColunas, double matriz[][nColunas])
{
    double soma = 0;
    int n = 0;
    for (int i = 0; i < nColunas; i++)
    {
        for (int j = 0; j < nColunas; j++)
        {
            if (j < n)
            {
                soma = soma + matriz[i][j];
            }
        }

        n = n + 1;
    }

    return soma;
}

double Media(int nColunas, double matriz[][nColunas])
{
    double soma = 0;
    int n = 0;
    int nMedia = 0;
    for (int i = 0; i < nColunas; i++)
    {
        for (int j = 0; j < nColunas; j++)
        {
            if (j < n)
            {
                soma = soma + matriz[i][j];
                nMedia++;
            }
        }

        n = n + 1;
    }

    return (soma / nMedia);
}

int main()
{
    char operacao;
    scanf("%c", &operacao);

    double x = 1;
    double matriz[12][12];

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &x);
            matriz[i][j] = x;
        }
    }

    double resultado;
    if (operacao == 'S')
    {
        resultado = Soma(12, matriz);
    }
    else
    {
        resultado = Media(12, matriz);
    }

    printf("%.1lf\n", resultado);

    return 0;
}