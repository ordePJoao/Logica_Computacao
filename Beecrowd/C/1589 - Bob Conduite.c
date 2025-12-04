#include <stdio.h>

int main()
{
    int casos;
    scanf("%d", &casos);

    for (int i = 0; i < casos; i++)
    {
        int x;
        int y;

        scanf("%d %d", &x, &y);
        printf("%d\n", x + y);
    }

    return 0;
}