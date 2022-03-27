#include <iostream>
using namespace std;
#include <cstring>

string inversePhrase(string, int);
string decalePhrase(string, int);

struct crypt {
  string phraseOrigine;
  int code;
  string phraseCryptee;
} crypt;
int main()
{

  char phrase[51];
  string result, result2;
  int t;

  crypt.code = 2;
  cout << " Entrez une chaîne de caractère :  " << endl;
  cin.getline(phrase, 51);
  crypt.phraseOrigine = phrase;
  t = strlen(phrase);
  result = inversePhrase(phrase ,t );
  result2 = decalePhrase(result, t);
  crypt.phraseCryptee = result2;
  cout << " Chaîne de caractère après inversion =  " << result2<< endl;
  cout <<crypt.phraseOrigine<<crypt.phraseCryptee<<crypt.code<<endl;

  return 0;
}

string inversePhrase(string p , int t)
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