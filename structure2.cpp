#include <iostream>
#include <cstring>
using namespace std;


int main()
{
int i;
struct tsnir{
char nom[20];
char prenom[20];
int annee;
double note[10];
};
tsnir etudiant[2];
strcpy(etudiant[0].nom,"renault");
strcpy(etudiant[0].prenom,"megane");
etudiant[0].annee=2010;
for(i=0;i<10;i++)
    etudiant[0].note[i]=i+5;
strcpy(etudiant[1].nom,"madani");
strcpy(etudiant[1].prenom,"mohamed");
etudiant[1].annee=2010;
for(i=0;i<10;i++)
    etudiant[1].note[i]=i+10;
cout<<etudiant[1].nom<<" "<<etudiant[1].prenom<<" "<<etudiant[1].note[1]<<endl;
return 0;
}