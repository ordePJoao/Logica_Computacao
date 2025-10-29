#include <stdio.h>

int main()
{
    int esteira = 1;
    int grenais = 0;
    int golsInter = 0;
    int golsGremio = 0;
    int vitoriasInter = 0;
    int vitoriasGremio = 0;
    int empates = 0;

    do
    {
        int inter, gremio;
        scanf("%d %d", &inter, &gremio);

        grenais++;
        golsInter += inter;
        golsGremio += gremio;
        if (inter > gremio)
        {
            vitoriasInter++;
        }
        else if (gremio > inter)
        {
            vitoriasGremio++;
        }
        else
        {
            empates++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &esteira);
        if (esteira != 1)
        {
            break;
        }

    } while (1);

    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", vitoriasInter);
    printf("Gremio:%d\n", vitoriasGremio);
    printf("Empates:%d\n", empates);
    if (vitoriasInter > vitoriasGremio)
    {
        printf("Inter venceu mais\n");
    }
    else if (vitoriasGremio > vitoriasInter)
    {
        printf("Gremio venceu mais\n");
    }
    else
    {
        printf("Nao houve vencedor\n");
    }

    return 0;
}