#include <iostream>
using namespace std;
int age;
int main()
{
    cout << "quel age a tu?" << endl;
    cin >> age;
    if (age < 9)
        cout << "vous etes trop jeune" << endl;
    else if ((age >= 9 && age <= 10))
        cout << "vous etes poussin!" << endl;
    else if ((age > 10 && age <= 12))
        cout << "vous etes benjamin!" << endl;
    else if ((age > 13 && age <= 14))
        cout << "vous etes Minime!" << endl;
    else if ((age > 14 && age <= 16))
        cout << "vous etes cadet!" << endl;
    else if ((age > 17 && age <= 18))
        cout << "vous etes junior!" << endl;
    else if ((age > 19 && age <= 34))
        cout << "vous etes senior!" << endl;
    if (age > 35)
        cout << "vous etes veteran!" << endl;
    return 0;
}