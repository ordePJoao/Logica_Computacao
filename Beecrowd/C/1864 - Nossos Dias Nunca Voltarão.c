#include <stdio.h>

int main()
{
    char frase[35] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    int numero;
    scanf("%d", &numero);

    for (int i = 0; i < numero; i++)
    {
        printf("%c", frase[i]);
    }

    printf("\n");

    return 0;
}