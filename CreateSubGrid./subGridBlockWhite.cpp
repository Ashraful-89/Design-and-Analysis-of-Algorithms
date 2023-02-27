#include<bits/stdc++.h>

using namespace std;
void solve(){
  int n;
  cin >> n;
  int a[n][n];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  
  int result = 0, cnt = 0;
  for(int i = 0; i < n-1; i++) {
    for(int j = i + 1; j < n ; j++) {
      for(int k = 0; k < n  ; k++) {
        if(a[i][k] == 1 && a[j][k] == 1) cnt++;
      }
      result += ((cnt-1) * cnt)/2;;
      cnt = 0;
    }
  }
  cout << "Sub Grid number is : " << result << endl;
  
}
int main() {
  solve();
  return 0;
}
