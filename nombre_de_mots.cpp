#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char tt[50];
    int i;
    int mots=0;
    cout << "Tapez une phrase : " << endl;
    cin.getline(tt, 50);
    for (i = 0; i < 50; i++)
    {
        if (tt[i] == ' ')
        {
            mots = mots + 1;
        }
    }
    cout << "dans cette phrase il y a " << mots+1<< " mots" << endl;

    return 0;
}
