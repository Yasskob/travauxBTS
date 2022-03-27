#include <iostream>
using namespace std;
#include <cstring>
int main()
{

    char phrase[51], rev[51];
    int t, i, j;

    cout << " Entrez une chaîne de caractère :  " << endl;
    cin.getline(phrase, 51);

    j = 0;
    t = strlen(phrase);

    rev[t] = '\0';
    for (i = t - 1; i >= 0; i--)
    {
        rev[j++] = phrase[i];
    }
    rev[i] = '\0';

    cout << " Chaîne de caractère après inversion =  " << rev << endl;

    for (i = 0; i < strlen(rev); i++)
    {
        if (rev[i] > 96 && rev[i] < 123)
        {
            rev[i] += 2;
        }
        else if (rev[i] > 64 && rev[i] < 91)
        {
            rev[i] += 2;
        }
        if ((rev[i] > 122) || (rev[i] > 90 && rev[i] < 97))
        {
            rev[i] -= 26;
        }
    }
    cout << "Votre phrase est devenue : " << rev << endl;

    
}