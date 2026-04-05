#include <bits/stdc++.h>
#include <iostream>
using namespace std;

map<char, double> valorNota = {
    {'W', 1.0 / 1.0},
    {'H', 1.0 / 2.0},
    {'Q', 1.0 / 4.0},
    {'E', 1.0 / 8.0},
    {'S', 1.0 / 16.0},
    {'T', 1.0 / 32.0},
    {'X', 1.0 / 64.0}};

int main()
{

    string str;
    while (cin >> str && str != "*")
    {
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '/')
            {
                str[i] = ' ';
            }
        }

        stringstream esteira(str);
        string compasso;
        int countCerto = 0;
        while (esteira >> compasso)
        {
            double countCompasso = 0;
            for (int i = 0; i < compasso.size(); i++)
            {
                countCompasso += valorNota[compasso[i]];
            }
            if (countCompasso == 1.0)
            {
                countCerto++;
            }
        }

        cout << countCerto << '\n';
    }

    return 0;
}