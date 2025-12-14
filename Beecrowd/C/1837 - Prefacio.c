#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);

    int q = a / b;
    int r = a % b;

    if (r < 0 || (b > 0 && r >= b))
    {
        if (a < 0 && b > 0)
        {
            q--; // Adicionando -1 no quociente para dar a equacao
            r = ((b * q) - a) * (-1);
        }

        else
        {
            q++; // O contrario para os dois negativos
            r = ((b * q) - a) * (-1);
        }
    }

    printf("%d %d\n", q, r);

    return 0;
}
