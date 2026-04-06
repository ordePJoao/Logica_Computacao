#include <bits/stdc++.h>
using namespace std;

string contaLetra(string &str)
{
    set<char> Letras;
    for (int i = 0; i < str.size(); i++)
    {
        if (isalpha(str[i]))
        {
            Letras.insert(str[i]);
        }
    }

    int count = Letras.size();

    if (count == 26)
    {
        return "frase completa\n";
    }
    else if (count >= 13)
    {
        return "frase quase completa\n";
    }
    else
    {
        return "frase mal elaborada\n";
    }
}

int main()
{
    int casos;
    while (cin >> casos)
    {
        cin.ignore();

        for (int i = 0; i < casos; i++)
        {
            string str;
            getline(cin, str, '\n');

            string Resposta = contaLetra(str);

            cout << Resposta;
        }
    }

    return 0;
}