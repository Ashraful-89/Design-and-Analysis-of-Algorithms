#include <bits/stdc++.h>
using namespace std;
 
signed main() 
{
  long long t ;
  cin >> t;
  while (t--){
    long long n;
    cin >> n;
    vector <long long > v(n);
    long long sum = 0;
    long long cnt = 0;
    for(long long i = 0,x; i < n; i++) {
      cin >> x;
      if(x < 0) {
        cnt++;
      }
      v[i] = abs(x);
      sum = sum + v[i];
    }
    sort(v.begin() , v.end());
    if(cnt & 2 != 0) cout << (sum - 2 * v[0])<< endl;
    else cout <<  sum << endl;
    }
    return 0;
}
