#include <bits/stdc++.h>
using namespace std;

int main() 
{
  
    int t;
    cin >> t;
    while(t--) {
      int n,m; cin >> n>> m;
      string s,s1;
      cin >> s >> s1;
      reverse(s1.begin(),s1.end());
      s +=s1;
      // cout << s << endl;
      int cnt = 0,flag = 0;
      for(int i = 0; i < s.size()-1; i++) {
        if(s[i] == s[i+1]) cnt++;
        if(cnt >  1) {
          cout << "NO" << endl;
          flag = 1;
          break;
        }
      }
      // cout << cnt << endl;
      if(flag == 0) cout << "YES" << endl;
    }
   return 0;
}
