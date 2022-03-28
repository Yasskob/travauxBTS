#include <iostream>
using namespace std;
#include <cstring>

string inversePhrase(string, int);
string decalePhrase(string, int, int);

int main()
{

  char phrase[51];
  string result, result2;
  int t,code;

  cout << " Entrez une chaîne de caractère :  " << endl;
  cin.getline(phrase, 51);
  t = strlen(phrase);
  cout<<"Entrez le code de cryptage"<<endl;
  cin>>code;
  result = inversePhrase(phrase ,t );
  result2 = decalePhrase(result, code, t);
  cout << " Chaîne de caractère après inversion =  " << result2<< endl;

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

string decalePhrase(string phrase, int nbCaract, int t)
{
 for (int i = 0; i < t; i++)
    {
        if (phrase[i] > 96 && phrase[i] < 123)
        {
            phrase[i]=(((phrase[i]-65)+nbCaract)%26)+64;
        }
        else if (phrase[i] > 64 && phrase[i] < 91)
        {
            phrase[i]=(((phrase[i]-97)+nbCaract)%26)+96;
        }       
    }
    
    return phrase;

}