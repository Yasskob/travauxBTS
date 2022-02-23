#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

void swap(int* i, int* j)
{
    int t = *i;
    *i = *j;
    *j = t;

    return;
}

int main()
{
    int a, b;
    cout << "entrer le nombre A" << endl;
    cin >> a;

    cout << "entrer le nombre B" << endl;
    cin >> b;
    swap(&a, &b);

    cout << "le nombre A est maintenant =  " << a << endl;
    cout << "le nombre B est maintenant =  " << b << endl;

    return 0;
}