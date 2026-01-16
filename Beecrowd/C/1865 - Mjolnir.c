#include <stdio.h>
#include <string.h>

int main()
{
    int casos;
    scanf("%d", &casos);

    for (int i = 0; i < casos; i++)
    {
        char pessoa[100];
        int forca;
        scanf("%s %d", &pessoa, &forca);

        if (strcmp(pessoa, "Thor") == 0)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }

    return 0;
}