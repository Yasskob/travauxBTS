#include <iostream>
using namespace std;
int nbr0, nbr1, result;
char operation0 = '+';
char operation1 = '-';
char operation2 = '*';
char operation3 = '/';
int main()
{
    cout << "entrer une operation";
    cin>> operation0 >> operation1 >> operation2 >> operation3;


    if (operation0)
        cout << "Entrer deux nombres ";
    cin >> nbr0 >> nbr1;
    result = nbr0 + nbr1;
    cout << nbr0 << operation0 << nbr1 << " = " << result;

    if (operation1)
        cout << "Entrer deux nombres ";
    cin >> nbr0 >> nbr1;
    result = nbr0 - nbr1;
    cout << nbr0 << operation1 << nbr1 << " = " << result;

    if (operation2)
        cout << "Entrer deux nombres ";
    cin >> nbr0 >> nbr1;
    result = nbr0 * nbr1;
    cout << nbr0 << operation2 << nbr1 << " = " << result;

    if (operation3)
        cout << "Entrer deux nombres ";
    cin >> nbr0 >> nbr1;
    result = nbr0 / nbr1;
    cout << nbr0 << operation3 << nbr1 << " = " << result;

    return 0;
}