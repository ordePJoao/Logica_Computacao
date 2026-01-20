#include <stdio.h>

int main()
{
    int casos;
    scanf("%d", &casos);

    char alternativa[casos][100];
    for (int i = 0; i < casos; i++)
    {
        scanf("%s", alternativa[i]);
    }

    printf("Ciencia da Computacao\n");

    return 0;
}