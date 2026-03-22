#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void convertMin(string &str) // C++ cria copia e deletao ao final se nao "&"
{
    for (int i = 0; i < str.size(); i++)
    {
        str[i] = toupper(str[i]);
    }
}

int countAlfa(string str)
{
    string Alfa = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // Tomar cuidado ARRAY
    int vetor[26] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 0; j < Alfa.size(); j++)
        {
            if (str[i] == Alfa[j])
            {
                vetor[j] = 1;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (vetor[i] == 1)
        {
            count++;
        }
        else
        {
            continue;
        }
    }

    return count;
}

int main()
{
    int casos;
    cin >> casos;
    getchar();

    string str;
    for (int i = 0; i < casos; i++)
    {
        getline(cin, str, '\n');
        convertMin(str);

        int contador = countAlfa(str);
        if (contador == 26)
        {
            cout << "frase completa\n";
        }

        else if (contador >= 13)
        {
            cout << "frase quase completa\n";
        }
        else
        {
            cout << "frase mal elaborada\n";
        }
    }

    return 0;
}