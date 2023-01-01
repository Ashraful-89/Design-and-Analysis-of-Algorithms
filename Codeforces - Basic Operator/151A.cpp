#include <bits/stdc++.h>
using namespace std;
 
int main() 
{    
  
    int n , k , l , c , d, p ,nl , np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int ans1 = (k * l) / nl;
    int ans2 = c * d;
    int ans3 =  p / np;
 
    if(ans1 < ans2 && ans1 < ans3) cout << ans1 / n << endl;
    else if(ans2 < ans1 && ans2 < ans3) cout <<ans2 / n << endl;
    else cout << ans3 / n << endl;
    return 0;
}
