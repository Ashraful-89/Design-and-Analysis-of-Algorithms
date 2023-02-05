#include <bits/stdc++.h>
#include <string>
using namespace std;
string s = "Codeforces";

int main() 
{
  int test;
  cin >> test;
  while(test--) {
    char ch;
    cin >> ch;
    if(s.find(ch) != string::npos) cout << "YES"<< endl;
    else cout << "NO" << endl;
  }
  
  return 0;
}
