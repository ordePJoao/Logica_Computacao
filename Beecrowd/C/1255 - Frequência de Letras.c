#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    int casos;
    scanf("%d", &casos);
    getchar();

    for (int i = 0; i < casos; i++)
    {
        char str[202];
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';

        int tamanho = strlen(str);
        for (int j = 0; j < tamanho; j++) // trasformando tudo em min
        {
            str[j] = tolower(str[j]);
        }

        int count[26] = {0};
        for (int j = 0; j < tamanho; j++)
        {
            if (str[j] >= 'a' && str[j] <= 'z') // entre a e z
            {
                int posicao = str[j] - 'a'; // tabela ascii (alfabeto)
                count[posicao]++;
            }
        }

        int maior = count[0];
        for (int j = 1; j < 26; j++)
        {
            if (count[j] > maior)
            {
                maior = count[j];
            }
        }

        for (int j = 0; j < 26; j++)
        {
            if (count[j] == maior)
            {
                printf("%c", j + 'a'); // "gambiarra indice alfabeto"
            }
        }

        printf("\n");
    }

    return 0;
}