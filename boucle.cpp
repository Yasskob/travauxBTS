#include <iostream>
using namespace std;
int main() {
string s1("oui");
int i ;

for (i = 0 ; i < 100 ; i = i + 1)

{

cout<<"iteration "<< i<<endl;

}

cout<<"valeur de i apres la boucle "<< i <<endl ;
cout<<"Voulez-vous afficher a nouveau cette boucle?"<<i<<endl;
cin>>s1;
if (s1 == s1)
for (i = 0 ; i < 100 ; i = i + 1)
{
    cout<<"iteration "<< i<<endl;
}
cout<<"valeur de i apres la boucle "<< i <<endl ;

return 0 ;

}