#include <iostream>
using namespace std;
#include <cstring>
#include <fstream>

string inversePhrase(string, int);
string decalePhrase(string, int);

struct crypt
{
    string phraseOrigine;
    int code;
    string phraseCryptee;
} crypt;

ifstream monFlux("fichier.txt");
ofstream monFlux2("code.txt");

int main()
{

    char phrase[51];
    string result, result2;
    int t, i = 0;

    if (monFlux)
    {
        while (monFlux.get(phrase[i]))
        {
            i++;
        }
    }
    cout<<"entrer le code secret"<<endl;
    cin>>crypt.code;
    crypt.phraseOrigine = phrase;
    t = strlen(phrase);
    result = inversePhrase(phrase, t);
    result2 = decalePhrase(result, t);
    crypt.phraseCryptee = result2;
    if (monFlux2)
    {
        monFlux2 << " Chaîne de caractère après inversion =  " << result2 << endl;
        cout <<crypt.phraseOrigine<<" --> "<<crypt.phraseCryptee<<"| code = "<<crypt.code<<endl;
        cout <<"chaine de caractere crypter"<<endl;
    }

    return 0;
}

string inversePhrase(string p, int t)
{
    int j, i;
    char rev[51];
    j = 0;

    rev[t] = '\0';
    for (i = t - 1; i >= 0; i--)
    {
        rev[j++] = p[i];
    }
    rev[i] = '\0';
    return rev;
}

string decalePhrase(string phrase, int t)
{
    for (int i = 0; i < t; i++)
    {
        if (phrase[i] > 96 && phrase[i] < 123)
        {
            phrase[i]=(((phrase[i]-65)+crypt.code)%26)+64;
        }
        else if (phrase[i] > 64 && phrase[i] < 91)
        {
            phrase[i]=(((phrase[i]-97)+crypt.code)%26)+96;
        }       
    }
    return phrase;
}