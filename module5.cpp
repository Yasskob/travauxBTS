#include <iostream>
using namespace std;
#include <cstring>
#include <fstream>

string inversePhrase(string, int);
string decalePhrase(string, int);
string crypter(string, int);

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

    char phrase[51]="";
    int t, i = 0, choix = 0;
    string result2;

    cout << "chosir entre ecrire dans un fichier ou ecrire directement" << '\n'
         << "choisir 1 ou 2" << endl;
    cin >> choix;
    if (choix == 1)
    {
        if (monFlux)
        {
            while (monFlux.get(phrase[i]))
            {
                i++;
            }
        }
        t = strlen(phrase);
        result2 = crypter(phrase, t);
        if (monFlux2)
        {
            monFlux2 << " Chaîne de caractère après inversion =  " << result2 << endl;
            monFlux2 << crypt.phraseOrigine << "|" << crypt.phraseCryptee << "|" << crypt.code << endl;
            cout << "chaine de caractere crypter" << endl;
        }
    }

     if (choix == 2)
    {
        cout << " Entrez une chaîne de caractère :  " << endl;
        cin.getline(phrase, 51);
        t = strlen(phrase);
        result2 = crypter(phrase, t);
        cout << " Chaîne de caractère après inversion =  " << result2 << endl;
    }

    return 0;
}

string crypter(string phrase, int t)
{
    string result, result2;
    int i = 0;

    crypt.code = 2;
    crypt.phraseOrigine = phrase;
    result = inversePhrase(phrase, t);
    result2 = decalePhrase(result, t);
    crypt.phraseCryptee = result2;
    return result2;
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

string decalePhrase(string phrase, int nbCaract)
{
    for (int i = 0; i < nbCaract; i++)
    {
        if (phrase[i] > 96 && phrase[i] < 123)
        {
            phrase[i] += 2;
        }
        else if (phrase[i] > 64 && phrase[i] < 91)
        {
            phrase[i] += 2;
        }
        if ((phrase[i] > 122) || (phrase[i] > 90 && phrase[i] < 97))
        {
            phrase[i] -= 26;
        }
    }
    return phrase;
}