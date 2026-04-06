#include <bits/stdc++.h>
using namespace std;

struct estoque
{
    int esquerda;
    int direita;
};

int main()
{
    int casos;
    while (cin >> casos)
    {
        map<int, estoque> Botas;
        for (int i = 0; i < casos; i++)
        {
            int tamanho;
            cin >> tamanho;

            char lado;
            cin >> lado;

            if (lado == 'E')
            {
                Botas[tamanho].esquerda++;
            }
            else if (lado == 'D')
            {
                Botas[tamanho].direita++;
            }
        }

        int countPares = 0;
        for (auto &i : Botas)
        {
            while (i.second.esquerda > 0 && i.second.direita > 0)
            {
                countPares++;

                i.second.esquerda--;
                i.second.direita--;
            }
        }

        cout << countPares << '\n';
    }

    return 0;
}