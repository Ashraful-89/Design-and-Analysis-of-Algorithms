#include<bits/stdc++.h>
#include<math.h>
using namespace std;
 
int main()
{
    // freopen("inputf.in", "r", stdin);
    // freopen("outputf.in", "w", stdout); 
    
    int a,b;
    cin>>a>>b;
    int n,m;
    if(a<b){
        n=a;
        m=(b-n)/2;
    }
    else
    {
        n=b;
        m=(a-n)/2;
    }
    cout<<n<<" "<<m<<endl;
 
 
}
