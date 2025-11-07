#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    while (y <= 0)
    {
        scanf("%d", &y);
    }

    int soma = 0;
    for (int i = 0; i < y; i++)
    {
        soma = soma + x;
        x++;
    }

    printf("%d\n", soma);

    return 0;
}