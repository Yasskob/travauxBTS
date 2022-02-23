#include <iostream>
using namespace std;
int valeur;
int main()
{
    cout << "donner une valeur" << endl;
    cin >> valeur;
    if (valeur == 1)
        cout << "La valeur est : un" << endl;
    else if (valeur == 2)
        cout << "La valeur est : deux" << endl;
    else if (valeur == 3)
        cout << "La valeur est : trois" << endl;
    else if (valeur == 4)
        cout << "La valeur est : quatre" << endl;
    else
        cout << "je ne connais ce chiffre" << endl;
    return 0;
}