#include <stdio.h>

int main()
{
    int casos;
    scanf("%d", &casos);

    for (int i = 0; i < casos; i++)
    {
        int numero;
        scanf("%d", &numero);

        int resultado = 0;
        for (int j = 0; j < numero; j++)
        {
            if (j % 2 == 0)
            {
                resultado++;
            }
            else
            {
                resultado--;
            }
        }

        printf("%d\n", resultado);
    }
}