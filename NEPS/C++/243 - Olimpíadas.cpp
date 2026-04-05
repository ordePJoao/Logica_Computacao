#include <bits/stdc++.h>
using namespace std;

struct paises
{
    int existe;
    int ouro;
    int prata;
    int bronze;
};

bool regraSort(pair<int, paises> &a, pair<int, paises> &b)
{
    if (a.second.ouro != b.second.ouro)
    {
        return a.second.ouro > b.second.ouro;
    }

    if (a.second.prata != b.second.prata)
    {
        return a.second.prata > b.second.prata;
    }

    if (a.second.bronze != b.second.bronze)
    {
        return a.second.bronze > b.second.bronze;
    }

    return a.first < b.first;
}

int main()
{
    int nPaises;
    int nModalidades;
    cin >> nPaises >> nModalidades;

    map<int, paises> Paises;
    for (int i = 1; i <= nModalidades; i++)
    {
        int mOuro;
        int mPrata;
        int mBronze;
        cin >> mOuro >> mPrata >> mBronze;

        Paises[mOuro].ouro++;
        Paises[mPrata].prata++;
        Paises[mBronze].bronze++;
    }

    for (int i = 1; i <= nPaises; i++)
    {
        Paises[i]; // criar indice e confirmar todos os paises
    }

    vector<pair<int, paises>> vPaises(Paises.begin(), Paises.end());

    sort(vPaises.begin(), vPaises.end(), regraSort);

    bool ehPrimeiro = true;
    for (const auto &i : vPaises)
    {
        if (!ehPrimeiro)
        {
            cout << ' ';
        }
        ehPrimeiro = false;

        cout << i.first;
    }

    cout << '\n';

    return 0;
}