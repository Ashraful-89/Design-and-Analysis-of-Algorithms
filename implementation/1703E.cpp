#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test;
    cin >> test;
    while(test--) {
      int n;
      cin>>n;
      string s[n];
      for(int i=0;i<n;i++)
      cin>>s[i];
      
      int asraf=0,x=0,y=0;
      for(int i=0;i<n;i++)
      {
          
          for(int j=0;j<n;j++)
          {
              int a[2]={};
              a[s[i][j]-'0']++;
              a[s[j][n-i-1]-'0']++;
              a[s[n-i-1][n-j-1]-'0']++;
              a[s[n-j-1][i]-'0']++;
              if(a[1]<a[0])s[i][j]=s[j][n-i-1]=s[n-i-1][n-j-1]=s[n-j-1][i]='1';
              else s[i][j]=s[j][n-i-1]=s[n-i-1][n-j-1]=s[n-j-1][i]='1';
              asraf=asraf+min(a[0],a[1]);
          }
      }
      cout<<asraf<<endl;
    }
    return 0;
}
