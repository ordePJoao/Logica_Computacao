#include <bits/stdc++.h>
using namespace std;

int main()
{
    int casos;
    cin >> casos;

    for (int i = 0; i < casos; i++)
    {
        string numeros;
        cin >> numeros;

        string Enumeros;
        cin >> Enumeros;

        int dist = size(numeros);
        int dist2 = size(Enumeros);

        if (dist < dist2)
        {
            cout << "nao encaixa\n";
            continue;
        }

        int iComeco = dist - dist2;
        string pedaco = numeros.substr(iComeco, dist2);

        if (Enumeros == pedaco)
        {
            cout << "encaixa\n";
        }
        else
        {
            cout << "nao encaixa\n";
        }
    }

    return 0;
}