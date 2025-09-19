#include <stdio.h>

long long calculadorLetalidade(long long *V, int Ncasos)
{
    if (Ncasos <= 1)
    {
        return 0; // Caso especial: 0 ou 1 vírus
    }

    // Ordenando vetor em ordem crescente
    for (int i = 0; i < Ncasos - 1; i++)
    {
        int menorIndice = i;
        for (int j = i + 1; j < Ncasos; j++)
        {
            if (V[j] < V[menorIndice])
            {
                menorIndice = j;
            }
        }
        if (menorIndice != i)
        {
            long long aux = V[i];
            V[i] = V[menorIndice];
            V[menorIndice] = aux;
        }
    }

    // Calculando a soma das diferenças dos pares (ignorando o do meio se N ímpar)
    long long resultado = 0;
    int pares = Ncasos / 2;
    for (int i = 0; i < pares; i++)
    {
        resultado += V[Ncasos - 1 - i] - V[i];
    }

    return resultado;
}

int main()
{
    int casos;
    while (scanf("%d", &casos) != EOF)
    {
        long long Virus[1005]; // Tamanho fixo para N <= 1000
        for (int i = 0; i < casos; i++)
        {
            scanf("%lld", &Virus[i]);
        }

        long long x = calculadorLetalidade(Virus, casos);
        printf("%lld\n", x);
    }

    return 0;
}