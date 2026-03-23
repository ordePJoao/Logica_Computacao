#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool regraTamanho(const string &strA, const string &strB)
{
    /* verificam 2 vezes A -- B && B -- A
    if (strA.size() == strB.size()) // Se igual, mantem
    {
        return false; // true --> continua(prioridade) | false --> troca (duvida), se 2 falsos, entende ==
    }
    */

    return strA.size() > strB.size(); // A ideia "A vem ANTES de B" nesse caso DESCRESCENTE
}

int main()
{
    int casos;
    cin >> casos;
    cin.ignore(); // getchar() cpp

    for (int i = 0; i < casos; i++)
    {

        string str;
        getline(cin, str, '\n');

        stringstream esteiraStr(str);
        vector<string> str_s;
        while (esteiraStr >> str)
        {
            str_s.push_back(str);
        }

        // sort --> se == (troca ordem original) - Instável/Rápido (QuickSort)
        // stable_sort --> se ==, preserva ordem original - Estável/-Eficiência-sort (MergeSort)
        stable_sort(str_s.begin(), str_s.end(), regraTamanho);

        for (int j = 0; j < str_s.size(); j++)
        {
            if (j == str_s.size() - 1)
            {
                cout << str_s[j] << endl;
            }
            else
            {
                cout << str_s[j] << " ";
            }
        }
    }

    return 0;
}