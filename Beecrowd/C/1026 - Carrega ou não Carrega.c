#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long int a;
    long long int b;
    while (scanf("%lld %lld", &a, &b) != EOF)
    {
        long long int bit = (a ^ b);
        printf("%lld\n", bit);
    }

    return 0;
}