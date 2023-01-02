#include <bits/stdc++.h>
using namespace std;

int main() 
{
  
    int k , n , s , p;
    cin >> k >> n >> s >> p;
    int sheet = 0;
    if(n % s != 0)  sheet = n / s + 1;
    else   sheet = n / s;
    
    sheet = k * sheet;
    if(sheet % p == 0) cout << sheet / p << endl;
    else cout << sheet / p + 1 << endl;
    return 0;
}
