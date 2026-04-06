#include <bits/stdc++.h>
using namespace std;

void arrumaStr(set<string> &Palavras, string &str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (!isalpha(str[i]))
        {
            str[i] = ' ';
            continue;
        }

        str[i] = tolower(str[i]);
    }

    stringstream esteira(str);
    while (esteira >> str)
    {
        Palavras.insert(str);
    }
}

int main()
{
    set<string> Palavras;
    string str;
    while (cin >> str)
    {
        arrumaStr(Palavras, str);
    }

    for (auto i : Palavras)
    {
        cout << i << '\n';
    }

    return 0;
}