#include<bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("inputf.in", "r", stdin);
    // freopen("outputf.in", "w", stdout); 
    
    long long int n;
    cin>>n;
    int result;
    result = n / 100 + (n % 100 / 20) + (n % 100 % 20 / 10) + (n % 100 % 20 % 10 / 5) + (n % 100 % 20 % 10 % 5 / 1);
    cout<<result<<endl;
  
    return 0;
}
 
