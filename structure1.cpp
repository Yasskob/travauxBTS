#include <iostream>
using namespace std;

struct automobile
{
    char marque[10];
    char immatriculation[8];
    int annéImmatriculation;
    int litre;
};


int main()
{
     automobile monAuto;
    cout<<"quel est la marque"<<endl;
        cin>>monAuto.marque;
        
    cout<<"quel est l immatriculation"<<endl;
        cin>>monAuto.immatriculation;

    cout<<" annee de première immatriculation"<<endl;
        cin>>monAuto.annéImmatriculation;

    cout<<"Le nombre de litres de carburant dans le reservoir."<<endl;
        cin>>monAuto.litre;

    cout<<monAuto.marque<<" "<<monAuto.immatriculation<<" "<<monAuto.annéImmatriculation<<" "<<monAuto.litre<<endl;
}