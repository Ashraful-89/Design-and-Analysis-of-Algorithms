#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test;
    cin >> test;
    while(test--) {
      int n;
      cin >> n;
      int a[n];
      vector<int> v1, v2;
      for(int i = 1; i <= n; i++) {
           cin >> a[i];
           if(a[i] % 2 == 0) v1.push_back(i);
           else v2.push_back(i);
      }
      if(v1.size() == n) cout << "NO" << endl;
      else if(v2.size() == 2 && n == 3 ) cout << "NO" << endl;
      else {
        cout << "YES" << endl;
        if(v2.size() >= 3) cout << v2[0] << " " << v2[1] << " " << v2[2] << endl;
        else cout << v1[0] <<" " << v2[0] << " " << v1[1] << endl;
      }
    }
    return 0;
}
