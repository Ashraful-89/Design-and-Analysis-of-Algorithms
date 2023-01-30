#include <iostream>
using namespace std;

int main() 
{
  int t;
  cin >> t;
  while(t--) {
    int n, s, r;
    cin >> n >> s >> r;
    int a[n];
    a[0] = s - r;
    int sum = 0;
    for(int i = 1; i < n ; i++) {
      a[i] = 1;
      sum++;
    }
    int j = 1;
    int temp = r - sum;
    while(temp != 0){
      a[j] = a[j] + 1;;
      temp--;
      j++;
      if(j == n) j = 1;
    }
    
    
    // while(temp >= (a[0] - 1) && j < n){
    //   a[j] = a[j] + a[0] - 1;
    //   temp = temp - a[0] - 1;
    // }
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
  }
    return 0;
}
