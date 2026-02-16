#include <stdio.h>

int main()
{

    double N, L;
    scanf("%lf %lf", &N, &L);

    double result = (L * 100.00) / N - 100;

    printf("%.2lf%%\n", result);

    return 0;
}