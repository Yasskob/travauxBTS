
#include <iostream>
using namespace std;


int devine(int x){
   srand(10);
int random = rand();

        if(x==random){
            cout<<"gagner!!"<<endl;
            return 0;
        }
        else if(random<x){
        cout<<"plus petit"<<endl;
        }
         else if(random>x){
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