// 1162 - Organizador de Vagões
#include <bits/stdc++.h>
using namespace std;

int organizaVagoes(vector<int> &vet)
{
    int countTrocas = 0;
    int tamanho = vet.size();
    for (int i = tamanho - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (vet[j] > vet[j + 1])
            {
                swap(vet[j], vet[j + 1]);
                countTrocas++;
            }
        }
    }

    return countTrocas;
}

int main()
{
    int nEsteira;
    while (cin >> nEsteira)
    {
        for (int esteira = 0; esteira < nEsteira; esteira++)
        {

            int numeroVagoes;
            cin >> numeroVagoes;

            vector<int> vVagoes;
            for (int indice = 0; indice < numeroVagoes; indice++)
            {
                int vagoes;
                cin >> vagoes;

                vVagoes.push_back(vagoes);
            }

            int result = organizaVagoes(vVagoes);

            cout << "Optimal train swapping takes " << result;
            cout << " swaps.\n";
        }
    }

    return 0;
}