#include <stdio.h>
#include <string.h>

void removeCaractere(char *contrato, char caracterRemover)
{
    long long i, j;
    long long tamanho = strlen(contrato);

    for (i = 0, j = 0; i < tamanho; i++)
    {
        if (contrato[i] != caracterRemover)
        {
            contrato[j] = contrato[i];
            j++;
        }
    }
    // Adiciona o terminador nulo para finalizar a nova string
    contrato[j] = '\0';
}

int main()
{
    do{
        char numRemover;
        scanf("%c", &numRemover);
        char contrato[1001];
        scanf("%s", &contrato);

        if(numRemover == '0' && contrato[0] == '0')
        {
            return 0;
        }

        removeCaractere(contrato, numRemover);

        int i = 0;
        while (contrato[i] == '0' && contrato[i] != '\0') // desconsiderando os 0 a esquerda
        {
            i++; // para no primeiro algarismo que nao seja 0
        }

        if (i > 0) // Reorganizar a string
        {
            int j = 0;
            while (contrato[i] != '\0')
            {
                contrato[j] = contrato[i];
                j++;
                i++;
            }

            contrato[j] = '\0';
        }

        if (strlen(contrato) == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("%s\n", contrato);
        }

        memset(contrato, '\0', sizeof(contrato));

    } while(1);

    return 0;
}