#include <bits/stdc++.h>
using namespace std;

int main()
{
    int horaSaida;
    int duracaoHoras;
    int fusoHorario;

    cin >> horaSaida >> duracaoHoras >> fusoHorario;

    int horarioChegada = (horaSaida + duracaoHoras) + fusoHorario;
    if (horarioChegada < 0 || horarioChegada > 24)
    {
        horarioChegada = 24 - abs(horarioChegada);
        horarioChegada = abs(horarioChegada);
    }

    if (horarioChegada == 24)
    {
        horarioChegada = 0;
    }

    cout << horarioChegada << '\n';

    return 0;
}