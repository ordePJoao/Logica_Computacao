#include <stdio.h>

float soma(float Matriz[12][12], int coluna)
{
    float resultado = 0;
    for (int i = 0; i < 12; i++)
    {
        resultado += Matriz[i][coluna];
    }
    return resultado;
}

float media(float Matriz[12][12], int coluna)
{
    return soma(Matriz, coluna) / 12;
}

int main()
{
    float Matriz[12][12];
    int coluna;
    char operacao;

    scanf("%d", &coluna);
    scanf(" %c", &operacao);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &Matriz[i][j]);
        }
    }

    if (operacao == 'S')
    {
        printf("%.1f\n", soma(Matriz, coluna));
    }
    else if (operacao == 'M')
    {
        printf("%.1f\n", media(Matriz, coluna));
    }

    return 0;
}