#include <bits/stdc++.h>
using namespace std;

int main()
{
    int idasCasos;
    while (cin >> idasCasos)
    {
        for (int indice = 0; indice < idasCasos; indice++)
        {
            int produtos;
            cin >> produtos;
            cin.ignore();

            map<string, pair<double, int>> Compra; // usando pair (sem struct)
            for (int i = 0; i < produtos; i++)     // valor dos produtos
            {
                string frutas;
                cin >> frutas;

                double valor;
                cin >> valor;
                cin.ignore();

                Compra[frutas].first = valor; // uso do pair
            }

            cin >> produtos;
            cin.ignore();
            for (int i = 0; i < produtos; i++) // qtd de produtos
            {
                string frutas;
                cin >> frutas;

                int qtdUnit;
                cin >> qtdUnit;
                cin.ignore();

                Compra[frutas].second = qtdUnit;
            }

            double valorTotal = 0;
            for (const auto &n : Compra)
            {
                valorTotal += (n.second.first * n.second.second); // uso do pair --> .second (value) --> .first (primeiro da ordem) ...
            }

            cout << fixed << setprecision(2);
            cout << "R$ " << valorTotal << '\n';
            cout << defaultfloat;
        }

        return 0;
    }
}