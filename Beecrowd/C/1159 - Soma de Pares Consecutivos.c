#include <stdio.h>

int main()
{
    do
    {
        int esteira;
        scanf("%d", &esteira);

        if (esteira == 0)
        {
            break;
        }

        int soma = 0, numeros = esteira;
        for (int i = 0; i < 5;)
        {
            if (numeros % 2 == 0)
            {
                soma = soma + numeros;
                i++;
            }

            numeros++;
        }

        printf("%d\n", soma);

    } while (1);

    return 0;
}