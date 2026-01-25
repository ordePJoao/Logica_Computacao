#include <stdio.h>

int main()
{
    int a;
    int b;

    scanf("%d %d", &a, &b);

    int c;
    if (a > b)
    {
        c = a;
    }
    else if (b > a)
    {
        c = b;
    }
    else if (a == b)
    {
        c = a;
    }
    
    printf("%d\n", c);

    return 0;
}