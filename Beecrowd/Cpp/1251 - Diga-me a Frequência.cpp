#include <bits/stdc++.h>
using namespace std;

bool regraSort(pair<char, int> a, pair<char, int> b)
{
    if (a.second == b.second)
    {
        return a.first > b.first;
    }

    return a.second < b.second;
}

int main()
{
    string str;
    bool ehPrimeiro = true;
    while (cin >> str)
    {
        if (!ehPrimeiro)
        {
            cout << '\n';
        }
        ehPrimeiro = false;

        map<char, int> frequencia;
        for (int i = 0; i < str.size(); i++)
        {
            char caracter;
            caracter = str[i];

            frequencia[caracter]++;
        }

        vector<pair<char, int>> balde;
        for (auto i : frequencia) // despeja a "gaveta" no balde
        {
            balde.push_back(i);
        }

        sort(balde.begin(), balde.end(), regraSort);

        for (auto i : balde)
        {
            cout << (int)i.first << ' ';
            cout << i.second << endl;
        }
    }

    return 0;
}