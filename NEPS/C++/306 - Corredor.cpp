#include <bits/stdc++.h>

using namespace std;

int main()
{
	int casos;
	cin >> casos;

	long long int somaParcial;
	long long int somaMax;
	for (int i = 0; i < casos; i++)
	{
		long long int numero;
		cin >> numero;

		if (i == 0)
		{
			somaMax = numero;
			somaParcial = numero;
			continue;
		}
		
		/* algoritmo de Kadane
		somaParcial += numero;
		if (numero > somaParcial)
		{
			somaParcial = numero;
		}
		if (somaParcial > somaMax)
		{
			somaMax = somaParcial;
		}
		*/
	
		somaParcial = max(numero, somaParcial + numero);
		somaMax = max(somaMax, somaParcial);

	}

	cout << somaMax << '\n';

	return 0;
}