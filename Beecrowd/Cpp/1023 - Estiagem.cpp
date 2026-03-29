#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef struct
{
    int moradores;
    int consumo;
} dadosMora;

int main()
{
    int casos;
    int countCidade = 1;

    bool printfEnter = false;
    while ((cin >> casos) && (casos != 0))
    {
        if (printfEnter == true) // \n pra cada cidade tirando o primeiro
        {
            cout << '\n';
        }
        printfEnter = true;

        map<int, dadosMora> cidade;
        int moradores;
        int consumo;
        long double consMedio = 0;
        double totalMorad = 0;
        for (int i = 0; i < casos; i++)
        {
            cin >> moradores;
            cin >> consumo;

            long double consPerCapita = consumo / moradores;
            // cidade[consPerCapita] = {moradores, consumo}; //sobreescreve
            
            cidade[consPerCapita].moradores += moradores;
            cidade[consPerCapita].consumo += consumo;

            totalMorad += moradores;
            consMedio += consumo;
        }

        consMedio /= totalMorad;

        cout << "Cidade# " << countCidade << ":\n";

        bool primeiro = true;
        for (auto item : cidade)
        {
            if (!primeiro) // negacao de primeiro --> false (nao entra)
            {
                cout << ' '; // espaco apenas antes
            }
            primeiro = false;

            cout << item.second.moradores << '-' << item.first;
        }
        cout << '\n';

        cout << fixed << setprecision(2);
        cout << "Consumo medio: " << trunc(consMedio * 100) / 100; // imprimir 2 casas decimais sem arredondar
        cout << " m3.";
        cout << '\n';

        cout << defaultfloat; // desabilitando setprecion()

        countCidade++;
    }

    return 0;
}