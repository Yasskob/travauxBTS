// Auteur : VotrePrenom VotreNom
// Date : 02/11/2014
//Nom du Programme : main.cpp
#include <iostream>
using namespace std;
int valeur = 10;
int quotient = 10 / 3;
int reste = 10 % 3;
int main()
{
/* Vous devez corriger ce programme et arriver à le compiler puis l’exécuter.
cout << ’Le programme marche !’ << end;
int valeur = 10 */
cout << "Le programme marche !" << endl;
cout << "valeur=" << valeur << endl;
// Attention : la division de deux entiers est une division euclidienne, // c’està-dire une division ***ENTIERE*** !

cout << "quotient=" << quotient << endl;

cout <<"reste="<< reste << endl;
// Si vous voulez faire une division réelle, il faut convertir un des
// arguments en réel :
cout << "quotient reel =" << valeur / 3.0 <<endl; // Cette fois-ci 3.0 est réel
cout <<"Fin du programme"<<endl;
return 0;
}