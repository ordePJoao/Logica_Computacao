#include <stdio.h>

void contador(int N, int M)
{
    int result = 0;
    if (N < M)
    {
        for (N; N <= M; N++)
        {
            printf("%d ", N);
            result += N;
        }
        printf("Sum=%d\n", result);
    }
    else
    {
        for (M; M <= N; M++)
        {
            printf("%d ", M);
            result += M;
        }
        printf("Sum=%d\n", result);
    }
}

int main()
{

    int x = 0, y = 0;
    do
    {
        scanf("%d %d", &x, &y);

        if (x == 0 || y == 0 || x < 0 || y < 0)
        {
            break;
        }

        contador(x, y);

    } while (1);

    return 0;
}