#include <bits/stdc++.h>
using namespace std;

int main()
{
    int casos;
    cin >> casos;
    cin.ignore();
    cin.ignore();

    bool primeiro = true;
    for (int indice = 0; indice < casos; indice++)
    {

        if (!primeiro)
        {
            cout << endl;
        }
        primeiro = false;

        string especie;
        double countArvores = 0;
        map<string, int> arvore;
        while (getline(cin, especie, '\n') && (especie != ""))
        {
            arvore[especie]++;
            countArvores++;
        }

        for (const auto &i : arvore) // const nao permite mudanca nos dados originais
        {
            double porcentagem;
            porcentagem = (i.second / countArvores) * 100.0;

            cout << fixed << setprecision(4);
            cout << i.first << ' ' << porcentagem << '\n';
            cout << defaultfloat;
        }
    }

    return 0;
}