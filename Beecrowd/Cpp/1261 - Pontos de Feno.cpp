#include <bits/stdc++.h>
using namespace std;

int main()
{
    int esteiraPalavras;
    cin >> esteiraPalavras;

    int esteiraFrases;
    cin >> esteiraFrases;

    map<string, long int> vlrPalavra;
    for (int i = 0; i < esteiraPalavras; i++)
    {
        string palavra;
        cin >> palavra;

        long int valor;
        cin >> valor;

        vlrPalavra[palavra] = valor;
    }

    long int count = 0;
    for (int i = 0; i < esteiraFrases; i++)
    {
        string palavra;
        while (cin >> palavra && palavra != ".")
        {
            count += vlrPalavra[palavra];
        }

        cout << count << '\n';
        count = 0;
    }

    return 0;
}