#include <stdio.h>

int main()
{

    int senha = 2002, x = 0;
    while (x != senha)
    {
        scanf("%d", &x);
        if (x != senha)
        {
            printf("Senha Invalida\n");
        }
        else
        {
            printf("Acesso Permitido\n");
        }
    }
    return 0;
}