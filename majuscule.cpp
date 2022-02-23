#include <iostream>
using namespace std;
#include <cstring>
#include <cstdlib>
int main()
{
    int i = 0;
    int j = 0;
    char phrase[10];
    char maj[10];

    cout << "entrer une phrase" << endl;
    cin.getline(phrase, 10);
    for (i = 0; i < strlen(phrase); i++)
    {
       if (phrase[i] < 122 && phrase[i] > 97)
        maj[i] = phrase[i] - 32;
        else
         maj[i] = phrase[i];
        
    }
    for (j = 0; j < 10; j++)
    {
        cout << maj[j];
    }
}
