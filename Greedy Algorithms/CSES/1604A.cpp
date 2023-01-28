#include <iostream>
using namespace std;
 
int main() 
{
  int test;
  cin >> test;
  while(test--) {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int index = 1;
    int ans = 0;
    for(int i = 0; i < n; i++) {
      if(index < a[i]) {
         ans = ans + a[i] - index;
         index = a[i] + 1;
      }
      else index++;
    
    }
    cout << ans << endl;
  }
    return 0;
}
