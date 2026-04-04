#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct dados
{
    string nome;
    string sentido;
    int distancia;
};

bool regraSort(dados &a, dados &b)
{
    if (a.distancia == b.distancia)
    {
        if (a.sentido == b.sentido)
        {
            return a.nome < b.nome;
        }
        else
        {
            return a.sentido < b.sentido;
        }
    }

    return a.distancia < b.distancia;
}

int main()
{
    int esteira;
    while (cin >> esteira)
    {
        vector<dados> vAlunos;
        for (int i = 0; i < esteira; i++)
        {
            dados Aluno;

            string str;
            cin >> str;
            Aluno.nome = str;

            cin >> str;
            Aluno.sentido = str;

            int valor;
            cin >> valor;
            Aluno.distancia = valor;

            vAlunos.push_back(Aluno);
        }

        sort(vAlunos.begin(), vAlunos.end(), regraSort);

        for (auto i : vAlunos)
        {
            cout << i.nome << '\n';
        }
    }

    return 0;
}