#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool assValida(string &a, string &b)
{
    int count = 0;
    int tamanho = max(a.size(), b.size());
    for (int i = 0; i < tamanho; i++)
    {
        if (a[i] != b[i])
        {
            count++;
        }
    }

    if (count > 1)
    {
        return false;
    }

    return true;
}

int main()
{
    int alunosAss;
    while (cin >> alunosAss && alunosAss != 0)
    {
        map<string, string> Aluno;
        for (int i = 0; i < alunosAss; i++)
        {
            string nome;
            cin >> nome;

            string assinatura;
            cin >> assinatura;

            Aluno[nome] = assinatura;
        }

        int count = 0;
        int alunosPresentes;
        cin >> alunosPresentes;
        for (int i = 0; i < alunosPresentes; i++)
        {
            string nome;
            cin >> nome;

            string assinatura;
            cin >> assinatura;

            bool valida = assValida(Aluno[nome], assinatura);

            if (!valida)
            {
                count++;
            }
        }

        cout << count << '\n';
    }

    return 0;
}