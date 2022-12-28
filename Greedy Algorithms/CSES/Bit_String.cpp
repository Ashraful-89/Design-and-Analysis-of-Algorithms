#include <bits/stdc++.h>
using namespace std;

int main() 
{
  long long  n;
  cin >> n;
  long long fact = 1;
  for(long long int i = 1; i <= n ; i++) {
    fact =  fact * 2 ;
    fact = fact % 1000000007;
  }
  cout<< fact % 1000000007 << endl;
  return 0;
}
