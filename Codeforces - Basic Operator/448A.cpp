#include <bits/stdc++.h>
using namespace std;

int main() 
{
  
    int a[3] , b[3],sum = 0, sum1 = 0;
    for(int i = 0; i < 3 ; i++) {
       cin >> a[i];
       sum = sum + a[i];
    }
    for(int i = 0 ; i < 3; i++) {
       cin >> b[i];
       sum1 = sum1 + b[i];
    }
    int n;
    cin >> n;
    
    int ans = 0;
    if(sum % 5 != 0) ans = sum / 5 + 1;
    else ans = sum / 5;
    
    if(sum1 % 10 != 0) ans = ans + sum1 / 10 + 1;
    else ans = ans + sum1 / 10;
    
    if(ans <= n) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
