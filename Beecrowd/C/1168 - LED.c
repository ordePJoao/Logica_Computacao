#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int coutLed(char *str)
{
    int count = 0;
    int tamanho = strlen(str);
    for (int i = 0; i < tamanho; i++)
    {
        if (str[i] == '0')
        {
            count = count + 6;
        }
        else if (str[i] == '1')
        {
            count = count + 2;
        }
        else if (str[i] == '2')
        {
            count = count + 5;
        }
        else if (str[i] == '3')
        {
            count = count + 5;
        }
        else if (str[i] == '4')
        {
            count = count + 4;
        }
        else if (str[i] == '5')
        {
            count = count + 5;
        }
        else if (str[i] == '6')
        {
            count = count + 6;
        }
        else if (str[i] == '7')
        {
            count = count + 3;
        }
        else if (str[i] == '8')
        {
            count = count + 7;
        }
        else if (str[i] == '9')
        {
            count = count + 6;
        }
    }

    return count;
}

int main()
{
    int casos;
    scanf("%d", &casos);

    char numeros[100];
    for (int i = 0; i < casos; i++)
    {
        scanf(" %s", &numeros);

        int nLeds = coutLed(numeros);
        printf("%d leds\n", nLeds);
    }

    return 0;
}