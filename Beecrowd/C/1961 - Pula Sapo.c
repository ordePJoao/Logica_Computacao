#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int alturasapo;
    int esteira;
    scanf("%d %d", &alturasapo, &esteira);

    int mtr[esteira];
    for (int i = 0; i < esteira; i++)
    {
        scanf("%d", &mtr[i]);
    }

    for (int i = 0; i < esteira - 1; i++)
    {
        int salto;
        salto = abs(mtr[i] - mtr[i + 1]);
        if (alturasapo >= salto)
        {
            if (i == esteira - 2)
            {
                printf("YOU WIN\n");
            }

            continue;
        }
        else
        {
            if (alturasapo < salto)
            {
                printf("GAME OVER\n");
                break;
            }

            continue;
        }
    }

    return 0;
}