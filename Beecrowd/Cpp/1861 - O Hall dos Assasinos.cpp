#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct saldo
{
    bool vivo = true;
    int assasinatos;
};

int main()
{
    map<string, saldo> Assasino;
    string strAss;
    string strVit;
    while (cin >> strAss)
    {
        cin >> strVit;

        Assasino[strAss].assasinatos++;
        Assasino[strVit].vivo = false;
    }

    cout << "HALL OF MURDERERS\n";
    for (const auto &i : Assasino)
    {
        if (i.second.vivo == true)
        {
            cout << i.first << ' ' << i.second.assasinatos << '\n';
        }
    }

    return 0;
}