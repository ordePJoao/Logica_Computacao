#include <stdio.h>

int main()
{
    int alcool = 0;
    int gasolina = 0;
    int diesel = 0;

    do
    {
        int tipo;
        scanf(" %d", &tipo);
        if (tipo == 1)
        {
            alcool++;
        }
        else if (tipo == 2)
        {
            gasolina++;
        }
        else if (tipo == 3)
        {
            diesel++;
        }
        else if (tipo == 4)
        {
            break;
        }
        else
        {
            continue;
        }
    } while (1);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}