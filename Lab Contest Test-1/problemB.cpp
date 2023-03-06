#include<bits/stdc++.h>
using namespace std;

int main() {
  
  int t;
  cin >> t;
  while(t--) {
    string s , t;
    cin >> s >> t;
    int flag = 0;
    for(int i = 0; i < s.size(); i++) {
      string s1 ,s2;
      s1 = s.substr(0,i+1);
      s2 = s.substr(0,i);
      reverse(s2.begin(), s2.end());
      s1 += s2;
      if(s1.find(t) != -1){
        flag = 1; break;
      }
    }
    if(flag == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}
