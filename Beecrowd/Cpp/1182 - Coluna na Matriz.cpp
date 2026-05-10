#include <bits/stdc++.h>

using namespace std;

int main()
{
	int coluna;
	cin >> coluna;

	string operacao;
	cin >> operacao;

	double valor;
	vector<vector<double>> mtr(12);

	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			cin >> valor;
			mtr[i].push_back(valor);
		}
	}

	float resultado = 0;

	for (int i = 0; i < 12; i++)
	{
		resultado += mtr[i][coluna];
	}

	cout << fixed << setprecision(1);

	if (operacao == "S")
	{
		cout << resultado << '\n';
	}
	else
	{
		resultado /= 12.0;
		cout << resultado << '\n';
	}

	cout << defaultfloat;

	return 0;
}
