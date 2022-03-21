#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct sportif
{
    int numClient;
    string nom = "Mbappé";
    char prénom[10] = "Kylian";
    adresse1 adresse;
    competence1 comp;

    int numClient2;
    string nom2 = "tedi";
    char prénom2[10] = "yannick";
    adresse2 adresse;
    competence2 competence;
};

struct adresse1
{
    int numero = 0655332211;
    char rue[20] = "ruemensieur";
    int codepostal = 93190;
    char ville[10] = "bondy";
};
struct competence1
{
    int vitesse = 99;
    int frappe = 90;
    char sport[10] = "foot";
};

struct adresse2
{
    int numero = 0650403010;
    char rue[20] = "ruemadame";
    int codepostal = 93240;
    char ville[10] = "sevran";
};
struct competence2
{
    int vitesse = 88;
    int frappe = 20;
    char sport[10] = "foot";
};

int main()
{
    sportif sportifs;
    string choix;
    cout << "entrer le nom d'un joueur" << endl;
    cin >> choix;
    if (choix != sportifs.nom2)
    {
        cout << "oui" << endl;
    }
    else
    {
        cout << "non" << endl;
    }
}