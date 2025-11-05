#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    for (int i = 1; i <= y; i++)
    {
        if (i % x != 0)
        {
            printf("%d ", i);
        }

        else
        {
            printf("%d\n", i);
        }
    }

    return 0;
}