#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while (getline(cin, str, '\n'))
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);

        stringstream esteira(str);
        vector<string> palavras;

        while (esteira >> str)
        {
            palavras.push_back(str);
        }

        char letra = palavras[0][0];
        bool contabilizou = false;
        int countTotal = 0;
        for (int i = 1; i < size(palavras); i++)
        {
            if (palavras[i][0] == letra)
            {
                if (contabilizou == false)
                {
                    countTotal++;
                }

                contabilizou = true;
            }
            else
            {
                letra = palavras[i][0];
                contabilizou = false;
            }
        }

        cout << countTotal << "\n";
    }

    return 0;
}