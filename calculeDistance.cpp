#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    string vdd;
    string vda;
    int d, j;
    struct tville
    {
        string villeA;
        string villeB;
        int distance;
    };

    tville ville[4];

    ville[0].villeA = "Liège";
    ville[0].villeB = "Luxembourg";
    ville[0].distance = 155;

    ville[2].villeA = "Liège";
    ville[2].villeB = "Nancy";
    ville[2].distance = 121;

    ville[3].villeA = "Nancy";
    ville[3].villeB = "Dijon";
    ville[3].distance = 201;

    cout << "entrer une ville de depart" << endl;
    cin >> vdd;
    cout << "entrer une ville d arrivee" << endl;
    cin >> vda;

    for (int i = 0; i < 3; i++)
    {
        if (vdd == ville[i].villeA)
        {
            j = i;
            i = 3;
        }
    }
    for ( j; j < 3; j++)
    {
        d += ville[j].distance;
        if (vda == ville[j].villeB){
            j=3;
        }
    }

    cout << "la distance est de " << d << endl;
}