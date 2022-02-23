#include <iostream>
using namespace std;
#include <cstring>
#include <cstdlib>
int main()
{
    int i, g, j = 0;
    int mode = 0;
    char mode1[] = "cartable";
    char lettre[8];

    cout << "Choisir entre le mode 1 ou le mode 2" << endl;
    cout << "ecrire 1 ou 2" << endl;
    cin >> mode;
    if (mode == 1)
    {
        cout << "mode1 choisi" << endl;
        cout << "vous devez trouver un mot qui comporte 8 lettres vous avez 10 tentatives" << endl;
        for (i = 0; i < 10; i++)
        {
            cout << "ecrire une lettre" << endl;
            cin >> lettre[i];
            for (g = 0; g < 8; g++)
            {
                if (mode1[g] == lettre[i])
                {
                    cout << "lettre position" << g + 1 << " vrai" << endl;
                    j++;
                }
               

            }
            if (j == 6)
            {
                cout << "gagner !" << endl;
                return 0;
                i==10;
            }
        }
        cout << "perdu !" << endl;
        return 0;
    }
    else if (mode == 2)
    {
        cout << "mode2 choisi" << endl;
    }
    else
        cout << "erreur" << endl;
}