#include <bits/stdc++.h>
using namespace std;

int main() 
{
  long long  n ;
  cin >> n;
  int array[n-1];
  for(long long i = 0 ; i < n - 1; i++) cin >> array[i];
  sort(array,array+ n-1);
  for(long long  i = 0 ; i < n ; i++){
    if(array[i] == i + 1) continue;
    else {
      cout << i + 1 << endl;
      break;
    }
    // cout << array[i] << " ";
    
  }
  return 0;
}