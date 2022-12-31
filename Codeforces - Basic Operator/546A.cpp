#include <iostream>
using namespace std;
 
int main() 
{
    int i,k,n;
    cin >>i >> k >> n;
    int ans = i * (n * ( n + 1) / 2);
    if(ans > k) cout << ans - k << endl;
    else cout << '0' << endl;
 
    return 0;
}
