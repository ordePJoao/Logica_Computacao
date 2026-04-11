#include <bits/stdc++.h>

using namespace std;

int main()
{
	int casos;

	while (cin >> casos)
	{
		vector<int> Fila(casos);

		for (int i = 0; i < casos; i++)
		{
			int valor;
			cin >> valor;

			Fila[i] = valor;
		}

		set<int> saida;
		cin >> casos;

		for (int i = 0; i < casos; i++)
		{
			int valor;
			cin >> valor;

			saida.insert(valor);
		}

		bool ehPrimeiro = true;

		for (auto i : Fila) // Fila --> slice(Fila.begin()+1, Fila.end())
		{
			if (!saida.count(i))
			{
				if (!ehPrimeiro)
				{
					cout << ' ';
				}
				ehPrimeiro = false;
				
				cout << i;
			}
		}

		cout << endl;
	}

	return 0;
}
