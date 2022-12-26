#include <iostream>
using namespace std;

int main() 
{
  string s;
  cin >> s;
  string ss = "";
  for(int i = 0; i < s.size() ; i++) {
    if(isupper(s[i])) s[i] = tolower(s[i]);
    if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')
    {
      ss += '.';
      ss +=s[i];
    }
  }
  
  cout << ss << endl;
  return 0;
}