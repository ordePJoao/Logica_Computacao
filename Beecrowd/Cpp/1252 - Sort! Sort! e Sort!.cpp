#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int divisor;

bool regraTamanho(const int &numero1, const int &numero2)
{
    int modulo1 = numero1 % divisor;
    int modulo2 = numero2 % divisor;

    bool ehPar = (numero1 % 2 == 0);
    bool ehPar2 = (numero2 % 2 == 0);

    if (modulo1 == modulo2)
    {
        if (ehPar == false && ehPar2 == false) // i - i
        {
            return numero1 > numero2;
        }

        else if (ehPar == false && ehPar2 == true) // i - p
        {
            return true;
        }

        else if (ehPar == true && ehPar2 == false) // p - i
        {
            return false;
        }

        else if (ehPar == true && ehPar2 == true) // p - p
        {
            return numero1 < numero2;
        }
    }

    return modulo1 < modulo2;
}

int main()
{
    int casos;

    while ((cin >> casos >> divisor) && (casos != 0 && divisor != 0))
    {

        vector<int> numeros;
        int numero;
        for (int i = 0; i < casos; i++)
        {
            cin >> numero;
            numeros.push_back(numero);
        }

        sort(numeros.begin(), numeros.end(), regraTamanho);

        cout << casos << ' ' << divisor << endl;
        for (int esteira : numeros)
        {
            cout << esteira << endl;
        }
    }

    cout << "0 0\n";

    return 0;
}