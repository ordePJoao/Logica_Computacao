#include <stdio.h>

int main()
{
    int casos;
    scanf("%d", &casos);

    for (int i = 0; i < casos; i++)
    {
        int casa;
        scanf("%d", &casa);

        long long int x = 0, y = 1, aux = 0, fibo = 0, j = 0;
        do
        {
            j++;
            if (casa == 0 || casa == 1)
            {
                printf("Fib(%d) = %d\n", casa, casa);
                break;
            }
            else if (j == casa)
            {
                printf("Fib(%d) = %lld\n", casa, fibo);
                break;
            }

            fibo = x + y;

            aux = y;
            y = fibo;
            x = aux;

        } while (1);
    }

    return 0;
}