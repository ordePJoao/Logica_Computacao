#include <stdio.h>
#include <string.h>

int main()
{
    int casos;
    scanf("%d", &casos);

    for (int i = 0; i < casos; i++)
    {
        char pessoa[2][100];
        char escolha[2][6];
        int numero[2];
        scanf("%s %s %s %s", &pessoa[0], &escolha[0], &pessoa[1], &escolha[1]);
        scanf("%d %d", &numero[0], &numero[1]);

        char *resultado; 
        // data segment (cozinheiro x garcom) || ler, achar o q importante, guardar, comecar
        // entrada proprio codigo
        if ((numero[0] + numero[1]) % 2 != 0)
        {
            resultado = "IMPAR"; // data segment (texto entre "")
        }
        else
        {
            resultado = "PAR"; // data segment
        }

        if (strcmp(escolha[0], resultado) == 0)
        {
            printf("%s\n", pessoa[0]);
        }
        else
        {
            printf("%s\n", pessoa[1]);
        }
    }

    return 0;
}