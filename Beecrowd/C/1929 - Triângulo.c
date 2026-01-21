#include <stdio.h>

char Triangulo(int *V)
{
    for (int i = 0; i < 4 - 1; i++) // organizando crescente
    {
        int menor = i;
        for (int j = i + 1; j < 4; j++)
        {
            if (V[menor] > V[j])
            {
                menor = j;
            }
        }

        if (V[menor] != V[i])
        {
            int aux = V[i];
            V[i] = V[menor];
            V[menor] = aux;
        }
    }

    int somaMnr = V[0] + V[1];
    if (somaMnr <= V[2] && somaMnr <= V[3] && (V[1] + V[2]) <= V[3])
    {
        return 'N';
    }
    else
    {
        return 'S';
    }
}

int main()
{
    int numeros[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &numeros[i]);
    }

    char result = Triangulo(numeros);

    printf("%c\n", result);
}