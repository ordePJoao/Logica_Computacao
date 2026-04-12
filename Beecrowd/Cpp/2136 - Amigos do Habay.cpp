#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, bool> Amigos;
    vector<string> vAmigo;
    string nome;
    string option;
    while (cin >> nome && nome != "FIM")
    {
        cin >> option;
        if (option == "YES")
        {
            Amigos[nome] = true;
            vAmigo.push_back(nome);
        }
        else
        {
            Amigos[nome] = false;
        }
    }

    for (auto [nome, result] : Amigos) // Imprime os amigos primeiro
    {
        if (result == true)
        {
            cout << nome << '\n';
        }
    }
    for (auto [nome, result] : Amigos) // Imprime os inimigos ao final
    {
        if (result == false)
        {
            cout << nome << '\n';
        }
    }

    string maiorNome;
    int maior = 0;
    for (auto mNome : vAmigo)
    {
        if (mNome.size() > maior) // Faz o check qual o maior
        {
            maiorNome = mNome;
            maior = mNome.size();
        }
    }

    cout << '\n';
    cout << "Amigo do Habay:\n";
    cout << maiorNome << '\n';

    return 0;
}