#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int a;
    long long int b;
    while (cin >> a >> b)
    {
        long long int bit = (a ^ b);
        cout << bit << "\n";
    }

    return 0;
}