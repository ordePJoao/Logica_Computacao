#include <stdio.h>

int main()
{

    int x;
    scanf("%d", &x);
    x = x * 4;

    for (int i = 1; i <= x; i++)
    {
        if (i % 4 == 0)
        {
            printf("PUM\n");
        }
        else
        {
            printf("%d ", i);
        }
    }

    return 0;
}