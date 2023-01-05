#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n ;
  cin >> n;
  if(n % 10 == 0) cout << n << endl;
  else {
    int temp = n % 10 ;
    if(temp >= 5) cout << (n + 10 - temp) << endl;
    else cout << n - temp << endl;
  }
  return 0;
}
