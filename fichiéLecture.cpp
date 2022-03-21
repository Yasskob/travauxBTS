#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    ifstream france("france.txt");
    ifstream irlande("irlande.txt");
    string ligne, numero="", nom="", poid="";
    char equipe[10];
    int num, poste;
    cout << "ecrire" << '\n'
         << "1- pour afficher les 15 joueurs dune equipe" << '\n'
         << "2-  afficher les 6 joueurs dun poste donne" << '\n'
         << "0-  exit" << endl;
    cin >> num;

    if (num == 1)
    {
        cout << "ecrire le nom dune equipe" << endl;
        cin >> equipe;

        if (strcmp(equipe, "france") == 0)
        {
            if (france)
            {
                while (getline(france, ligne))
                {
                    cout << ligne << endl;
                }
            }
        }
        else if (strcmp(equipe, "irlande") == 0)
        {
            if (irlande)
            {
                while (getline(irlande, ligne))
                {
                    cout << ligne << endl;
                }
            }
        }
    }
   else if (num == 2){
       cout<<"entrer le numero dun poste entre 1 et 15"<<endl;
       cin>>poste;
       poste -= 1;
       for(int i=0;i<5;i++)
       {      
           france>>numero>>nom>>poid;
           if(i==poste) {
              cout<<numero<<" "<<nom<<" "<<poid<<endl;
           }     
       }   
       for(int i=0;i<5;i++)
       {      
           irlande>>numero>>nom>>poid;
           if(i==poste) {
              cout<<numero<<" "<<nom<<" "<<poid<<endl;
           }     
       }  
   }
    else if (num == 3){
    return 0;
   }
   else{
       cout<<"erreur"<<endl;
   }

    return 0;
}