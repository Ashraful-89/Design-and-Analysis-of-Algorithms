#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n;
  cin >> n;
  long long a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  long long ans = 0;
  long long temp = a[0];
  for(int i = 1; i < n ; i++) {
    if(temp > a[i]) {
        ans = ans + (temp - a[i]);
    }
    else {
      temp = a[i];
    }
  }
  cout << ans << endl;
  return 0;
}