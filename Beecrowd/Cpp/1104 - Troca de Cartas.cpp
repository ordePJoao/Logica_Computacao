#include <bits/stdc++.h>
using namespace std;

int main()
{
    int qtdAlice;
    int qtdBia;
    while (cin >> qtdAlice >> qtdBia)
    {
        if (qtdAlice == 0 && qtdBia == 0)
        {
            break;
        }

        set<int> cartasAlice;
        for (int i = 0; i < qtdAlice; i++)
        {
            int carta;
            cin >> carta;

            cartasAlice.insert(carta);
        }

        set<int> cartasBia;
        for (int i = 0; i < qtdBia; i++)
        {
            int carta;
            cin >> carta;

            cartasBia.insert(carta);
        }

        int dispA = 0;
        int dispB = 0;
        for (auto carta : cartasAlice)
        {
            if (!cartasBia.count(carta)) // nao encontrou
            {
                dispA++;
            }
        }

        for (auto carta : cartasBia)
        {
            if (!cartasAlice.count(carta)) // nao encontrou
            {
                dispB++;
            }
        }

        cout << min(dispA, dispB) << '\n';
    }

    return 0;
}