#include<bits/stdc++.h>

using namespace std;

int main() {
  
  int test;
  cin >> test;
  while(test--) {
    string s;
    cin >> s;
    int ans = 0;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++) {
      if(s[i] == 'L') cnt++;
      else {
        ans = max(ans,cnt);
        cnt=0;
      }
    }
    cout << max(ans,cnt) + 1 << endl;
    
  }
  return 0;
}
