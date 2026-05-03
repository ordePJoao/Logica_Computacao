#include <bits/stdc++.h>
using namespace std;

int main()
{
    string texto;
    cin >> texto;

    char caracter;
    cin.ignore();
    cin >> caracter;

    int count = 0;
    for (const auto &i : texto)
    {
        if (i == caracter)
        {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}