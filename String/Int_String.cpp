#include <bits/stdc++.h>
using namespace std;

int main() 
{
  
  string s , s2;
  cin >> s >> s2;
  string s1 ;
  for(int i = 0; i < s.size(); i++){
  int n;
  n=((int)s[i]^(int)s2[i]);
  s1 = s1+  to_string(n);
  }
  cout << s1 << endl;
  return 0;
}
