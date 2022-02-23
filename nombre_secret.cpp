#include <iostream>
using namespace std;
int nbrsecret = 10;

int devine(int x){
    
        if(x==nbrsecret){
            cout<<"gagner!!"<<endl;
            return 0;
        }
        else if(nbrsecret<x){
        cout<<"plus petit"<<endl;
        }
         else if(nbrsecret>x){
        cout<<"plus grand"<<endl;
         }
}
int main()
{
    
    int nbr;
    int i;
    cout<<"devine le nombre secret"<<endl;
    for(i==0;i<10;i++){
        cin>>nbr;
        devine(nbr);
    }
        
    return 0;
}