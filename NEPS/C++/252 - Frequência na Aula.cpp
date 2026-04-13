// 252 - Frequência na Aula
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int casos;
    while (cin >> casos)
    {
        set<int> Numeros;
        int n;
        for (int i = 0; i < casos; i++)
        {
            cin >> n;
            Numeros.insert(n);
        }

        cout << Numeros.size() << '\n';
    }

    return 0;
}