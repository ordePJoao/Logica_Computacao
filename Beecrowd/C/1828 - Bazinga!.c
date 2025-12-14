#include <stdio.h>
#include <string.h>

int Bazinga(char s1[9], char s2[9])
{ // resultado 1 == Bazinga | resultado 2 == Raj | resultado 0 == De novo

    int resultado = 0;

    if (strcmp(s1, "Spock") == 0)
    {
        if (strcmp(s2, "lagarto") == 0 || strcmp(s2, "papel") == 0)
        {
            resultado = 2;
        }

        else if (strcmp(s2, "tesoura") == 0 || strcmp(s2, "pedra") == 0)
        {
            resultado = 1;
        }
    }

    else if (strcmp(s1, "papel") == 0)
    {
        if (strcmp(s2, "tesoura") == 0 || strcmp(s2, "lagarto") == 0)
        {
            resultado = 2;
        }

        else if (strcmp(s2, "pedra") == 0 || strcmp(s2, "Spock") == 0)
        {
            resultado = 1;
        }
    }

    else if (strcmp(s1, "tesoura") == 0)
    {
        if (strcmp(s2, "Spock") == 0 || strcmp(s2, "pedra") == 0)
        {
            resultado = 2;
        }

        else if (strcmp(s2, "papel") == 0 || strcmp(s2, "lagarto") == 0)
        {
            resultado = 1;
        }
    }

    else if (strcmp(s1, "lagarto") == 0)
    {
        if (strcmp(s2, "pedra") == 0 || strcmp(s2, "tesoura") == 0)
        {
            resultado = 2;
        }

        else if (strcmp(s2, "Spock") == 0 || strcmp(s2, "papel") == 0)
        {
            resultado = 1;
        }
    }

    else if (strcmp(s1, "pedra") == 0)
    {
        if (strcmp(s2, "papel") == 0 || strcmp(s2, "Spock") == 0)
        {
            resultado = 2;
        }

        else if (strcmp(s2, "lagarto") == 0 || strcmp(s2, "tesoura") == 0)
        {
            resultado = 1;
        }
    }

    return resultado;
}

int main()
{
    int casos;
    scanf("%d", &casos);

    for (int i = 0; i < casos; i++)
    {

        char string1[9];
        char string2[9];
        scanf("%s %s", string1, string2);

        int resultado = Bazinga(string1, string2);

        switch (resultado)
        {
        case 0:
            printf("Caso #%d: De novo!\n", i + 1);
            break;

        case 1:
            printf("Caso #%d: Bazinga!\n", i + 1);
            break;

        case 2:
            printf("Caso #%d: Raj trapaceou!\n", i + 1);
            break;

        default:
            break;
        }
    }

    return 0;
}