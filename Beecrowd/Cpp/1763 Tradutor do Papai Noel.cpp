#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<string, string> Natal;

    Natal["brasil"] = "Feliz Natal!";
    Natal["alemanha"] = "Frohliche Weihnachten!";
    Natal["austria"] = "Frohe Weihnacht!";
    Natal["coreia"] = "Chuk Sung Tan!";
    Natal["espanha"] = "Feliz Navidad!";
    Natal["grecia"] = "Kala Christougena!";
    Natal["estados-unidos"] = "Merry Christmas!";
    Natal["inglaterra"] = "Merry Christmas!";
    Natal["australia"] = "Merry Christmas!";
    Natal["portugal"] = "Feliz Natal!";
    Natal["suecia"] = "God Jul!";
    Natal["turquia"] = "Mutlu Noeller";
    Natal["argentina"] = "Feliz Navidad!";
    Natal["chile"] = "Feliz Navidad!";
    Natal["mexico"] = "Feliz Navidad!";
    Natal["antardida"] = "Merry Christmas!";
    Natal["canada"] = "Merry Christmas!";
    Natal["irlanda"] = "Nollaig Shona Dhuit!";
    Natal["belgica"] = "Zalig Kerstfeest!";
    Natal["italia"] = "Buon Natale!";
    Natal["libia"] = "Buon Natale!";
    Natal["siria"] = "Milad Mubarak!";
    Natal["marrocos"] = "Milad Mubarak!";
    Natal["japao"] = "Merii Kurisumasu!";

    string str;
    while (cin >> str)
    {
        if (Natal.count(str)) // tem indice str em Natal?
        {
            cout << Natal[str] << '\n';
        }
        else
        {
            cout << "--- NOT FOUND ---\n";
        }
    }

    return 0;
}