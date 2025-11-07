#include <stdio.h>

int main()
{

    int x;
    scanf("%d", &x);

    printf("0 1 1 ");
    int a1 = 1, a2 = 1, aux = 0;
    for (int i = 3; i < x; i++)
    {
        aux = a1 + a2;

        if (i == x - 1)
        {
            printf("%d", aux);
        }
        else
        {
            printf("%d ", aux);
        }

        a1 = a2;
        a2 = aux;
    }

    printf("\n");

    return 0;
}