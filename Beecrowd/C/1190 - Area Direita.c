#include <stdio.h>

double Soma(int nColunas, double matriz[][nColunas])
{
    double soma = 0;
    int n = 0;
    int nSecund = 11;
    for (int i = 0; i < nColunas; i++)
    {
        for (int j = 0; j < nColunas; j++)
        {
            if (j > n && j > nSecund)
            {
                soma = soma + matriz[i][j];
            }
        }

        n = n + 1;
        nSecund = nSecund - 1;
    }

    return soma;
}

double Media(int nColunas, double matriz[][nColunas])
{
    double soma = 0;
    int n = 0;
    int nSecund = 11;
    int nNumeros = 0;
    for (int i = 0; i < nColunas; i++)
    {
        for (int j = 0; j < nColunas; j++)
        {
            if (j > n && j > nSecund)
            {
                soma = soma + matriz[i][j];
                nNumeros++;
            }
        }

        n = n + 1;
        nSecund = nSecund - 1;
    }

    return (soma / nNumeros);
}

int main()
{

    char operacao;
    scanf("%c", &operacao);

    double matriz[12][12];
    double x;
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