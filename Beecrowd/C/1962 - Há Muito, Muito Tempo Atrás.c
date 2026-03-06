#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int conversorC(int N, char *ano) // (int N, char ano[6]) COMPILADOR LE IGUAL
{
    if (N < 2015)
    {
        N = 2015 - N;
        strncpy(ano, "D.C.", 5);
        return N;
    }
    else if (N == 2015)
    {
        strncpy(ano, "A.C.", 5);
        return 1;
    }
    else
    {
        N = N - 2015;
        strncpy(ano, "A.C.", 5);
        return N+1;
    }
}

int main()
{
    int casos;
    scanf("%d", &casos);

    int anoN;
    char tempo[6];
    for (int i = 0; i < casos; i++)
    {
        int N;
        scanf("%d", &N);
        int anoN = conversorC(N, tempo);

        printf("%d %s\n", anoN, tempo);
    }
    
    return 0;
}