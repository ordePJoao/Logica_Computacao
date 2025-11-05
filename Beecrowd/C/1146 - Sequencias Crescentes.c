#include <stdio.h>

int main()
{
    int esteira = 1;
    while (esteira != 0)
    {
        scanf("%d", &esteira);

        for (int i = 1; i <= esteira; i++)
        {
            if (i % esteira != 0)
            {
                printf("%d ", i);
            }
            else
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}