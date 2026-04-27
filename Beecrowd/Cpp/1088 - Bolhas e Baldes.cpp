#include <bits/stdc++.h>
using namespace std;

string ordenaVet(vector<int> &vet)
{
    int trocas = 1;
    int tamanho = vet.size();
    for (int i = 0; i < tamanho; i++)
    {
        while (vet[i] != i + 1)
        {
            int casaVlr = vet[i] - 1;
            swap(vet[i], vet[casaVlr]);
            trocas++;
        }
    }
    if (trocas % 2 == 0)
    {
        return "Marcelo";
    }

    return "Carlos";
}

int main()
{
    int casos;
    while (cin >> casos && casos != 0)
    {
        vector<int> vNumeros;
        for (int i = 0; i < casos; i++)
        {
            int valor;
            cin >> valor;

            vNumeros.push_back(valor);
        }

        string ganhador = ordenaVet(vNumeros);

        cout << ganhador << '\n';
    }

    return 0;
}