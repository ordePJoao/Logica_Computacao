#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, pcnt;
    do
    {
        scanf("%d %d %d", &x, &y, &pcnt);
        if (x == 0)
        {
            break;
        }

        int areaCasa;
        int areaMetros;
        areaCasa = (x * y * 100) / pcnt;

        areaMetros = sqrt(areaCasa);

        printf("%d\n", areaMetros);

    } while (1);

    return 0;
}