#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() 
{
  int test;
  cin >> test;
  while(test--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < n/2 ; i++) {
      if(s[i] == s[n-(i+1)]) break;
      else cnt++;
    }
    cout << n - 2 * cnt << endl;
    
  }
  
  return 0;
}
