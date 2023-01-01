#include<iostream>
#include<string>
using namespace std;
void removeVowels ()
{
    string s;
    cout<<" Enter your word:";
    cin >> s;
    string a = "aeiouyAEIOUY";
    for (int i = 0; i < s.length(); i++)
{
        for(int j = 0; j < a.length(); j++)
  {
            if(s[i] == a[j])
   {
                s.erase(s.begin() + i);
            }
        }
    }
    cout <<"new words without vowels is:"<<s;
}
int main()
{
removeVowels();
return 0;
}
