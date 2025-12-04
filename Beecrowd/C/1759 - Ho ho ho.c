#include <stdio.h>

int main()
{
    int casos;
    scanf("%d", &casos);

    for (int i = 0; i < casos; i++)
    {
        if (i == casos - 1)
        {
            printf("Ho!\n");
        }
        else
        {
            printf("Ho ");
        }
    }

    return 0;
}