#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void conversorRomano(int numero, char *str)
{
    int redutor[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *algarismos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    str[0] = '\0'; //garantindo str limpa

    for (int i = 0; numero != 0; i++)
    {

        while (numero >= redutor[i])
        {
            strcat(str, algarismos[i]);
            numero -= redutor[i];
        }
    }
}

int main()
{
    int numeroDec;
    scanf("%d", &numeroDec);

    char nRomano[1000];
    conversorRomano(numeroDec, nRomano);

    printf("%s\n", nRomano);

    return 0;
}