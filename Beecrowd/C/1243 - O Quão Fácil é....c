#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char str[1002];
    int countCtr = 0;
    int countPal = 0;
    while (fgets(str, sizeof(str), stdin) != NULL)
    {
        str[strcspn(str, "\n")] = '\0';

        char *token;
        token = strtok(str, " \t\n");
        while (token != NULL)
        {
            int tamanho = strlen(token);
            if (strcmp(token, ".") == 0) // se a str for apenas um "."
            {
                token = strtok(NULL, " \t\n");
                continue;
            }
            if (strcmp(token, " ") == 0) // se a str for apenas um " "
            {
                token = strtok(NULL, " \t\n");
                continue;
            }

            for (int i = 0; i < tamanho; i++)
            {
                if (ispunct(token[i]) > 0) // verifica pontuacao
                {
                    if (token[i] == '.')
                    {
                        if (i == tamanho - 1)
                        {
                            countPal++;
                            continue;
                        }
                        else
                        {
                            countCtr -= i;
                            break;
                        }
                    }
                    else
                    {
                        countCtr -= i;
                        break;
                    }
                }

                if (isalnum(token[i]) > 0) // verifica se é letra/numero
                {
                    if (isdigit(token[i]) > 0)
                    {
                        countCtr -= i;
                        break;
                    }
                    else
                    {
                        countCtr++;

                        if (i == tamanho - 1)
                        {
                            countPal++;
                        }
                    }
                }
            }

            token = strtok(NULL, " \t\n");
        }

        int comMedio = 0;
        if (countPal > 0) // evita divisao por 0 (problema)
        {
            comMedio = countCtr / countPal;
        }

        if (comMedio <= 3)
        {
            printf("250\n");
        }
        else if (comMedio > 3 && comMedio <= 5)
        {
            printf("500\n");
        }
        else if (comMedio >= 6)
        {
            printf("1000\n");
        }

        countCtr = 0;
        countPal = 0;
    }

    return 0;
}