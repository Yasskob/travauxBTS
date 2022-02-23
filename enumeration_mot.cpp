#include <iostream>
using namespace std;
#include <cstring>
#include <cstdlib>
int main()
{
    char phrase[30], mot1[8], mot2[8], mot3[8], mot4[8], mot5[8];
    int i, j = 0, sep[4];
    cout << "Entrez une phrase" << endl;
    cin.getline(phrase, 30);


    for (i = 0; i < strlen(phrase); i++)
    {
        if (phrase[i] == ' ')
        {
            sep[j] = i;
            j = j + 1;
        }
    }


    strncpy(mot1, phrase, sep[0]);
    strncpy(mot2, phrase + sep[0] + 1, sep[1] - sep[0] - 1);
    strncpy(mot3, phrase + sep[1] + 1, sep[2] - sep[1] - 1);
    strncpy(mot4, phrase + sep[2] + 1,  sep[3] - sep[2]-1);
    strncpy(mot5, phrase + sep[3] + 1, strlen(phrase) - sep[3] - 1);
    cout << "mot 1 = " << mot1 << " mot 2 = " << mot2 << " mot 3 = " << mot3 << " mot 4 = " << mot4 <<  " mot 5 = " << mot5 << endl;
}