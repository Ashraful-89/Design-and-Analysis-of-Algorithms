#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int test;
  cin >> test;
  while(test--) {
    int n;
    cin >> n;
    int i = 1;
    int first = 0,second = 0;;
    while(n >= i) {
      if(i % 4 == 0  || i % 4 == 1) {
        first = first + i;
        n = n - i;
        i = i + 1;
      }
      else {
        second = second + i;
        n = n - i;
        i = i + 1;
      }
    }
    // cout << n  << " " << i - 1 << endl;
    if((i - 1)  % 4 == 1 || (i - 1) % 4 == 2) {
      cout << first << " " << second + n << endl;
    }
    else 
    cout << first + n << " " << second << endl;
  }
  return 0;
}
