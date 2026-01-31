#include <stdio.h>
#include <string.h>

char Conversor(int dividendo, int divisor)
{
    int resto = dividendo % divisor;

    char tabela[] = "0123456789ABCDEF";

    return tabela[resto];
}

void conversorHex(int decimal, char *hex)
{

    int i = 0;
    while (decimal > 0) // numeroHex na ordem de divisao 16 (ao contrario)
    {
        hex[i] = Conversor(decimal, 16);
        decimal = decimal / 16;

        i++;
    }
    hex[i] = '\0';
    i--; // Indice apenas para os caracteres

    for (int j = 0; j < i; i--, j++) // numero Hex para leitura
    {
        char aux = hex[j];
        hex[j] = hex[i];
        hex[i] = aux;
    }
}

int main()
{
    int numero;
    scanf("%d", &numero);

    char hexadecimal[10];
    conversorHex(numero, hexadecimal);

    printf("%s", hexadecimal);
    printf("\n");
}