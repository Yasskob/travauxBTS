#include <iostream>
using namespace std;

int main()
{
    int nombre;
    cout << "Entrer un nombre" << endl;
    cin >> nombre;
    if (nombre % 2 == 0)
        cout << "Le nombre est pair" << endl;
    else
        cout << "Le nomber est impair" << endl;
    return 0;
}