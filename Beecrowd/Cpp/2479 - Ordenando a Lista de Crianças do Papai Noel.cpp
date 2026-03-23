#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    int casos;
    cin >> casos;

    int countSim = 0;
    int countNao = 0;
    char comportamento;
    string nome;
    vector<string> nomes;
    for (int i = 0; i < casos; i++)
    {
        cin >> comportamento;

        if (comportamento == '+')
        {
            countSim++;
        }
        else
        {
            countNao++;
        }

        cin >> nome;
        nomes.push_back(nome);

        sort(nomes.begin(), nomes.end());
    }

    for (string n : nomes)
    {
        cout << n << endl;
    }

    cout << "Se comportaram: " << countSim << " | ";
    cout << "Nao se comportaram: " << countNao << endl;

    return 0;
}