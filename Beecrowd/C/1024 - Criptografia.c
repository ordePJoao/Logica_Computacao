#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void primeiraC(char *str)
{

    int tamanho = strlen(str);
    for (int i = 0; i < tamanho; i++)
    {
        if (isalpha(str[i]) > 0)
        {
            str[i] = str[i] + 3;
        }
    }
}

void segundaC(char *str)
{

    int tamanho = strlen(str);
    char strInvertida[1002];
    for (int i = 0; i < tamanho; i++)
    {
        strInvertida[i] = str[tamanho - 1 - i];
    }
    strInvertida[tamanho] = '\0';

    strcpy(str, strInvertida);
}

void terceiraC(char *str)
{

    int tamanho = strlen(str);
    for (int i = tamanho / 2; i < tamanho; i++)
    {
        str[i] = str[i] - 1;
    }
}

int main()
{
    int casos;
    scanf("%d", &casos);
    getchar();

    for (int i = 0; i < casos; i++)
    {
        char str[1002];
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';

        primeiraC(str);
        segundaC(str);
        terceiraC(str);

        printf("%s\n", str);
    }

    return 0;
}