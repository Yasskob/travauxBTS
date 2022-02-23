#include <iostream>

using namespace std;

int calc(int x)
{
    int resultat;
    resultat = x + x;
    return resultat;
}



int main()
{
    int i;
    int s;
    int x;
for(i==0;i<5;i++){
cout<<"entrer un nombre"<<endl;
cin>>x;
s = calc(x);
}
cout<<"le resultat est"<<s<<endl;    
}