#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a[3];

    cin >> a[0] >> a[1] >> a[2];

    int maior = a[0];
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > maior)
        {
            maior = a[i];
        }
    }

    cout << maior << " eh o maior" << endl;

    return 0;
}