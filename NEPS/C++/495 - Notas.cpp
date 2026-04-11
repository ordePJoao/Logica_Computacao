#include <bits/stdc++.h>

using namespace std;

int main()
{
	int casos;

	while (cin >> casos)
	{
		map<int, int> Notas;

		for (int i = 0; i < casos; i++)
		{
			int valor;
			cin >> valor;

			Notas[valor]++;
		}

		int freqMax = 0;
		int resposta = 0;

		for (auto [first, second] : Notas)
		{
			if (second >= freqMax) // economiza sort
			{
				freqMax = second;
				resposta = first;
			}
		}

		cout << resposta << endl;
	}

	return 0;
}
