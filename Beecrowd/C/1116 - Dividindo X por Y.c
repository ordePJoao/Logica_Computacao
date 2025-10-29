#include <stdio.h>

int main()
{
    int casos;
    scanf("%d", &casos);
    for (int i = 0; i < casos; i++)
    {
        double x, y;
        scanf("%lf %lf", &x, &y);

        if (y == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1lf\n", x / y);
        }
    }

    return 0;
}
