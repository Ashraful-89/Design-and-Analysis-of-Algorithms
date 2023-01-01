#include <bits/stdc++.h>
using namespace std;
 
int main() 
{    
    long long int n ; cin >> n;
    
    long long int  ans = 0;
    if(n % 2 == 0) {
        n = n / 2;
        ans = - n * n  + n * (n + 1) ;
        cout << ans << endl;
    }
    else {
        n = n / 2;
        ans = - (n + 1) * (n + 1)  + n * (n + 1) ;
        cout << ans << endl;
    }
    
    return 0;
}
