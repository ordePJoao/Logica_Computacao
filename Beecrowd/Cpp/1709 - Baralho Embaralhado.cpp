#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int metade = n / 2;

        int posicao = 1;
        int contagem = 0;

        bool ehPrimeiro = true;
        while (posicao != 1 || ehPrimeiro)
        {
            ehPrimeiro = false;

            if (posicao <= metade)
            {
                posicao = posicao * 2;
            }
            else
            {
                posicao = (posicao - metade) * 2 - 1;
            }

            contagem++;
        }

        cout << contagem << '\n';
    }
    return 0;
}

/* 
3
1 2 3
2 1 3

1 2 3


6
1 2 3 4 5 6

4 1 5 2 6 3

2 4 6 1 3 5

1 2 3 4 5 6


9
1 2 3 4 5 6 7 8 9

5 1 6 2 7 3 8 4 9

7 5 3 1 8 6 4 2 9

8 7 6 5 4 3 2 1 9

4 8 3 7 2 6 1 5 9

2 4 6 8 1 3 5 7 9

1 2 3 4 5 6 7 8 9


*/