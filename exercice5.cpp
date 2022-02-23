#include <iostream>

using namespace std;
int main()
{
int i,ppt,x;
for (i==0;i<5;i++)
{
cout<<"entrer un entier"<<endl;
cin>>x;
if(i==0)ppt=x;
else if (x<ppt)ppt=x;
}
cout<<"le plus petit es"<<ppt<<endl;
return 0;
}