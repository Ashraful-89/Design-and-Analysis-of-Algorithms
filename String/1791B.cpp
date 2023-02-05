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
    int x = 0, y = 0;
    int flag = 0;
    for(int i = 0; i < n; i++) {
      if(s[i] == 'U') y++;
      else if(s[i] == 'R') x++;
      else if(s[i] == 'L') x--;
      else y--;
      if(x == 1 && y == 1) {
        flag = 1;
        cout << "YES"<< endl;
        break;}
    }
    if(flag == 0) cout << "NO" << endl;
  }
  
  return 0;
}
