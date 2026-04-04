#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct dados
{
    string nome;
    string cor;
    char tamanho;
};

bool regraSort(dados &a, dados &b)
{
    int tamRoupaA;
    int tamRoupaB;

    if (a.tamanho == 'P')
    {
        tamRoupaA = 0;
    }
    else if (a.tamanho == 'M')
    {
        tamRoupaA = 1;
    }
    else
    {
        tamRoupaA = 2;
    }

    if (b.tamanho == 'P')
    {
        tamRoupaB = 0;
    }
    else if (b.tamanho == 'M')
    {
        tamRoupaB = 1;
    }
    else
    {
        tamRoupaB = 2;
    }

    if (a.cor == b.cor)
    {
        if (a.tamanho == b.tamanho)
        {
            return a.nome < b.nome;
        }

        else
        {

            return tamRoupaA < tamRoupaB;
        }
    }
    else
    {
        return a.cor < b.cor;
    }
}

int main()
{
    int esteira;
    bool ehPrimeiro = true;
    while (cin >> esteira && esteira != 0)
    {
        cin.ignore();
        if (!ehPrimeiro)
        {
            cout << '\n';
        }
        ehPrimeiro = false;

        vector<dados> pedidos;
        for (int i = 0; i < esteira; i++)
        {
            dados camisaAtual;

            string str;
            getline(cin, str, '\n');
            camisaAtual.nome = str;

            cin >> str;
            camisaAtual.cor = str;

            cin.ignore();

            char caracter;
            cin >> caracter;
            camisaAtual.tamanho = caracter;

            cin.ignore();

            pedidos.push_back(camisaAtual);
        }

        sort(pedidos.begin(), pedidos.end(), regraSort);

        for (auto i : pedidos)
        {
            cout << i.cor << ' ' << i.tamanho << ' ' << i.nome << '\n';
        }
    }

    return 0;
}
