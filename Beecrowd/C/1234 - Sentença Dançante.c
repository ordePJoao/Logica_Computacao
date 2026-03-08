#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[1002];
    while (fgets(str, sizeof(str), stdin) != NULL)
    {
        str[strcspn(str, "\n")] = '\0';

        int tamanho = strlen(str);
        int count = 1;
        for (int i = 0; i < tamanho; i++)
        {
            if (isspace(str[i]) > 0)
            {
                continue;
            }

            else if (count == 1) // Maiúscula
            {
                str[i] = toupper(str[i]);
                count = 0;
            }

            else if (count == 0) // Minúscula
            {
                str[i] = tolower(str[i]);
                count = 1;
            }
        }

        printf("%s\n", str);
    }

    return 0;
}