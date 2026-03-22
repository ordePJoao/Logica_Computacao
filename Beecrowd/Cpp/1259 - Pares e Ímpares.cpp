#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> impar;
    vector<int> par;

    int casos;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        int numero;
        cin >> numero;

        if (numero % 2 != 0)
        {
            impar.push_back(numero);
        }
        else
        {
            par.push_back(numero);
        }
    }

    sort(par.begin(), par.end());
    sort(impar.begin(), impar.end(), greater<int>());

    // "Para cada (int) dentro do vetor (par)" i ~= par[i]
    for (int p : par)
    {
        cout << p << "\n";
    }

    // "Para cada (int) dentro do vetor (impar)" i ~= impar[i]
    for (int i : impar)
    {
        cout << i << "\n";
    }

    return 0;
}