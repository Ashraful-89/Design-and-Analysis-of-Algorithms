#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n , m;
  cin >> n >> m;
  int a[n] ;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  set <int > s;
  for(int i = 0 ; i < m; i++) {
    int x;
    cin >> x;
    s.insert(x);
  }
  
  for(int i = 0; i < n; i++) {
    if(s.count(a[i]) == 1) cout << a[i] << " ";
  }
  
  return 0;
}
