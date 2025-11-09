#include <stdio.h>

int main()
{

    int x;
    scanf("%d", &x);

    int multi = 1;
    for (int i = x; i != 0; i--)
    {
        multi = multi * i;
    }

    printf("%d\n", multi);

    return 0;
}