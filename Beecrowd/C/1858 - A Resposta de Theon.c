#include <stdio.h>

int main()
{
    int esteira;
    scanf("%d", &esteira);

    int numeros[esteira];
    for (int i = 0; i < esteira; i++)
    {
        scanf("%d", &numeros[i]);
    }

    int menorIndice = 0;
    for (int i = 0; i < esteira; i++)
    {
        if (numeros[i] < numeros[menorIndice])
        {
            menorIndice = i;
        }
    }

    printf("%d\n", menorIndice + 1);

    return 0;
}