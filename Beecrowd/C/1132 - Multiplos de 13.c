#include <stdio.h>

int main()
{

    int x, y, aux = 0, soma=0;
    scanf("%d %d", &x, &y);
    if (y > x)
    {
        aux = y;
        y = x;
        x = aux;
    }

    for(int i=y; i<=x; i++){
        if(i%13 != 0){
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}