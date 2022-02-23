#include <iostream>
#include <cstring>
void test(char *pt_tab);
using namespace std;

int main()
{

    char tab[24];
    cout << "ecrit une phrase " << endl;
    cin >> tab;
    test(&tab[0]);

    return 0;
}

void test(char *pt_tab)
{
    int trouve = 0;

    for (int i = 0; i < 24; i++)
    {
        if (pt_tab[i] == 65 || pt_tab[i] == 97)
        {
            trouve++;
        }
    }
    cout << "il y a " <<trouve<< " caractere A" << endl;
}