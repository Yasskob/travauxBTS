#include <iostream>
using namespace std;
void minmax(int i, int j, int &min, int &max)
{
    if (i < j)
    {
        min = i;
        max = j;
    }
    else
    {
        min = j;
        max = i;
    };
}
int main()
{
    int  w, x;
    int tab[2];
    cout << "Tapez la valeur de a : ";
    cin >> tab[0];
    cout << "Tapez la valeur de b : ";
    cin >> tab[1];
    minmax(tab[0], tab[1], w, x);
    cout << "Le plus petit vaut : " << w << endl;
    cout << "Le plus grand vaut : " << x << endl;
    return 0;
}
