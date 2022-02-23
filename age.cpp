#include <iostream>
using namespace std;
int age;
int main()
{
cout<<"quel age a tu?"<<endl;
cin>> age;
if ((age>18)||(age=18))
cout<<"vous etes majeur!"<<endl;
else cout<<"vous etre mineur!"<<endl;
return 0;
}