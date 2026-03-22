#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int compNotas(vector<int> &Notas)
{
    vector<int> vetNotas(Notas); // vetor(copia o vetor que esta aqui)

    sort(vetNotas.begin(), vetNotas.end());
    reverse(vetNotas.begin(), vetNotas.end());

    int count = 0;

    for (int i = 0; i < vetNotas.size(); i++)
    {
        if (Notas[i] == vetNotas[i])
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int casos;
    cin >> casos;

    for (int i = 0; i < casos; i++)
    {
        vector<int> notas;
        int alunos;
        cin >> alunos;

        for (int j = 0; j < alunos; j++)
        {
            int nota;
            cin >> nota;
            notas.push_back(nota);
        }

        cout << compNotas(notas) << endl;
    }

    return 0;
}