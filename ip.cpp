#include <iostream>
using namespace std;
#include <cstring>
#include <cstdlib>
int main()
{
    char adresse[16], oct1[4], oct2[4], oct3[4], oct4[4];
    int i, j = 0, sep[3];
    cout << "Entrez une adresse IP de la forme XXX.XXX.XXX.XXX" << endl;
    cin.getline(adresse, 16);


    for (i = 0; i < strlen(adresse); i++)
    {
        if (adresse[i] < 48 || adresse[i] > 57)
        {
            sep[j] = i;
            j = j + 1;
        }
    }


    strncpy(oct1, adresse, sep[0]);
    strncpy(oct2, adresse + sep[0] + 1, sep[1] - sep[0] - 1);
    strncpy(oct3, adresse + sep[1] + 1, sep[2] - sep[1] - 1);
    strncpy(oct4, adresse + sep[2] + 1, strlen(adresse) - sep[2] - 1);
    cout << "octect 1 = " << oct1 << " octect 2 = " << oct2 << " octect 3 = " << oct3 << " octect 4 = " << oct4 << endl;


    if (atoi(oct1) > 255 || atoi(oct1) < 0)
    {
        cout << "erreur octect 1" << endl;
    }
    else if (atoi(oct2) > 255 || atoi(oct2) < 0)
    {
        cout << "erreur octect 2" << endl;
    }
    else if (atoi(oct3) > 255 || atoi(oct3) < 0)
    {
        cout << "erreur octect 3" << endl;
    }
    else if (atoi(oct4) > 255 || atoi(oct4) < 0)
    {
        cout << "erreur octect 4" << endl;
    }

    if (atoi(oct1) < 128)
    {
        cout << "classe A" << endl;
        cout << "masque est 255.0.0.0" << endl;
        cout << "l'adrresse resaux est : "<<oct1<<"."<<"0"<<"."<<"0"<<"."<<"0"<<endl;
    }
   else if (atoi(oct1) < 192)
    {
        cout << "classe B" << endl;
        cout << "masque est 255.255.0.0" << endl;
        cout << "l'adresse resaux est : "<<oct1<<"."<<oct2<<"."<<"0"<<"."<<"0"<<endl;
    }
    else 
    {
        cout << "classe C" << endl;
        cout << "masque est 255.255.255.0" << endl;
        cout << "l'adresse resaux est : "<<oct1<<"."<<oct2<<"."<<oct3<<"."<<"0"<<endl;
    }
}