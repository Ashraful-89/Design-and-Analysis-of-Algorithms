#include <bits/stdc++.h>
using namespace std;

int main() 
{
  
  int test;
  cin >> test;
  while(test--) {
    int a , b, c, d;
    cin >> a >> b >> c >> d;
    int result = a;
    
    if(a == 0) {
      cout << 1 << endl;
    }
    else {
      result += 2 * min(b,c);
    int jok = abs(b-c) + d;
    if(jok >= a + 1) result += a + 1;
    else result += jok;
    cout << result << endl;
      
    }
    
  }
  return 0;
}
