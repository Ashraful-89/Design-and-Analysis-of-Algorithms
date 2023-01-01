#include <bits/stdc++.h>
using namespace std;
 
int main() 
{    
    int ans1, ans2 ,ans3;
    cin >> ans1 >> ans2 >> ans3;
    if(ans1 + ans2 <= ans3 ) cout << (ans1 + ans2) * 2 << endl;
    else if (ans1 > ans2 ) {
      if(ans3 + ans1 <  ans3 * 2 + ans2 ){
        cout << ans2 + (ans3 + ans1) << endl;
      }
      else {
        cout << ans2 + (ans3 * 2 + ans2) << endl;
      }
        
      }
    else {
      if(ans3 + ans2 <  ans3 * 2 + ans1 ){
        cout << ans1 + (ans3 + ans2) << endl;
      }
      else {
        cout << ans1 + (ans3 * 2 + ans1) << endl;
      }
    }
    return 0;
}
