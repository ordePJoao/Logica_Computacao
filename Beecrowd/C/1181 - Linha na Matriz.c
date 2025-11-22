#include <stdio.h>

double Soma(int Nlinha, int Ncolunas, double m[][Ncolunas]) // Bidimensional (Precisa saber onde quebrar)
{
    double resultado = 0;

    for (int j = 0; j < 12; j++)
    {
        resultado = resultado + m[Nlinha][j];
    }

    return resultado;
}

double Media(int Nlinha, int Ncolunas, double m[][Ncolunas])
{
    double resultado = 0, media = 0;

    for (int j = 0; j < 12; j++)
    {
        resultado = resultado + m[Nlinha][j];
    }

    media = resultado / 12.0;

    return media;
}

int main()
{
    int linha;
    scanf("%d", &linha);
    char operacao;
    scanf(" %c", &operacao);

    double matriz[12][12];
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            double x;
            scanf("%lf", &x);
            matriz[i][j] = x;
        }
    }

    double resultado = 0;
    if (operacao == 'S')
    {
        resultado = Soma(linha, 12, matriz);
    }
    else
    {
        resultado = Media(linha, 12, matriz);
    }
    printf("%.1lf\n", resultado);

    return 0;
}