#include <bits/stdc++.h>
using namespace std;

int main()
{
    string valor;
    while (cin >> valor)
    {
        stringstream convert(valor);
        int hora, minuto;
        char separador;

        convert >> hora >> separador >> minuto;

        int tempoTotal = 8 * 60;
        int tempo = (hora * 60) + minuto + 60;
        int atrasoMax = tempo - tempoTotal;

        if (atrasoMax > 0)
        {
            cout << "Atraso maximo: " << atrasoMax << "\n";
        }
        else
        {
            cout << "Atraso maximo: 0\n";
        }
    }
    return 0;
}