#include <stdio.h>
#include <stdlib.h>

int Clima(int a, int b, int c)
{
    int resultado = 0; // == 0 ruim, == 1 bom

    if (a < b)
    {
        if (b > c || c == b)
        {
            resultado = 0;
        }

        if (b < c)
        {
            if (c - b < b - a)
            {
                resultado = 0;
            }

            else
            {
                resultado = 1;
            }
        }
    }

    else if (a > b)
    {
        if (c > b || b == c)
        {
            resultado = 1;
        }
        else if (b > c)
        {
            if (abs(c - b) < abs(b - a))
            {
                resultado = 1;
            }

            else
            {
                resultado = 0;
            }
        }
    }

    if (a == b)
    {
        if (b < c)
        {
            resultado = 1;
        }
        else
        {
            resultado = 0;
        }
    }

    return resultado;
}

int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);

    int resultado = Clima(a, b, c);

    switch (resultado)
    {

    case 0:
        printf(":(\n");
        break;

    case 1:
        printf(":)\n");
        break;
    }

    return 0;
}