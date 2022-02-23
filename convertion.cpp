#include <iostream>
using namespace std;

int app(int convertion, char tab[5])
{
    if (convertion == 0)
        {
            tab[5] = "zero";
        }
    else if (convertion == 1)
    {
         
    }
    else if (convertion == 2)
    {
        
    }
    else if (convertion == 3)
    {
        cout << "trois" << endl;
    }
    else 
    cout << "je ne connais pas ce chiffre" << endl;
}

int main()
{
    int nombre;

    cout << "ecrire un nombre comprit entre 0 a 5" << endl;
    cin >> nombre;
    app(nombre);
    return 0;
}