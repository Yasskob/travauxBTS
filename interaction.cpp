#include <iostream>
using namespace std;
int main()
{
    int i;
    int nbr;
    cout << "entrer un nombre" << endl;
    cin >> nbr;

    for (i = nbr; i > 0; i = i - 1)

    {

        cout << "iteration " << i << endl;
    }

    cout << "valeur de i apres la boucle " << i << endl;
    cout << "Voulez-vous afficher a nouveau cette boucle?" << i << endl;

    return 0;
}