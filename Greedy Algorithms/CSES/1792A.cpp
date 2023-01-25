#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--) {
      int n;
      cin >> n;
      int a[n];
      for(int i = 0; i < n; i++) cin >> a[i];
      int cnt = 0;
      for(int i = 0; i < n; i++) {
        if(a[i] == 1) cnt++; 
      }
      if(cnt % 2 == 0) cout << cnt / 2 + (n - cnt) << endl;
      else cout << cnt / 2 + 1 + (n - cnt) << endl;
    }
    return 0;
}
