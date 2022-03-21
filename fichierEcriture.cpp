#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    char pays[10];
    string joueur, poid;
    string const france("T:/programation/module7/france.txt");
    string const irlande("T:/programation/module7/irlande.txt");
    ofstream monFlux(france.c_str());
    ofstream monFlux2(irlande.c_str());

    cout<<"france"<<endl;
    //monFlux <<"france"<< endl;
    for (int i; i < 2; i++)
    {
        cout << "ecrire le nom du joueur n " << i + 1 << endl;
        cin >> joueur;
        cout << "ecrire le poid du joueur n " << i + 1 << endl;
        cin >> poid;
        monFlux <<i + 1<< " " <<joueur<< " "<<poid<<endl;
    }



    cout<<"irlande"<<endl;
   // monFlux2 <<"irlande"<< endl;
    for (int i=0; i < 2; i++)
    {
        cout << "ecrire le nom du joueur n " << i + 1 << endl;
        cin >> joueur;
        cout << "ecrire le poid du joueur n " << i + 1 << endl;
        cin >> poid;
        monFlux2 <<i + 1<< " " <<joueur<< " "<<poid<<endl;
    }
    return 0;
}