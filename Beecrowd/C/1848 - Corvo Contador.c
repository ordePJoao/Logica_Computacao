#include <stdio.h>
#include <string.h>

int Binario(int linhas, char c[][8]) //[](string linha x) [coluna](onde quebra)
{
    int soma = 0;

    for (int i = 0; i < linhas; i++)
    {
        if (strcmp(c[i], "---") == 0) // como se fosse c[i][0 ate 4] (le a linha inteira)
        {
            soma = soma + 0;
        }
        else if (strcmp(c[i], "--*") == 0)
        {
            soma = soma + 1;
        }
        else if (strcmp(c[i], "-*-") == 0)
        {
            soma = soma + 2;
        }
        else if (strcmp(c[i], "-**") == 0)
        {
            soma = soma + 3;
        }
        else if (strcmp(c[i], "*--") == 0)
        {
            soma = soma + 4;
        }
        else if (strcmp(c[i], "*-*") == 0)
        {
            soma = soma + 5;
        }
        else if (strcmp(c[i], "**-") == 0)
        {
            soma = soma + 6;
        }
        else if (strcmp(c[i], "***") == 0)
        {
            soma = soma + 7;
        }
    }

    return soma;
}

int main()
{
    int esteira = 0;

    while (esteira < 3)
    {
        char numeros[1001][8];
        int nLoteria;
        int i = 0;
        do
        {
            fgets(numeros[i], 8, stdin);
            numeros[i][strcspn(numeros[i], "\n")] = '\0';

            if (strcmp(numeros[i], "caw caw") == 0)
            {
                nLoteria = Binario(i + 1, numeros);
                break;
            }
            else
            {
                i++;
            }

        } while(1);

        printf("%d\n", nLoteria);
        esteira++;
    }

    return 0;
}
