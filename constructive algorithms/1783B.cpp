#include<bits/stdc++.h>

using namespace std;

int main() {
  int test;
  cin >> test;
  while(test--) {
    int n;
    cin >> n;
    vector <int> v;
    int a = 1, b = n * n;
    for(int i = 0; i < n * n ; i++) {
      if(i % 2 == 0) {
        v.push_back(a++);
      }
      else v.push_back(b--);
    }
    int x = 0;
    for(int i = 1 ; i <= n ; i++) {
      if(i % 2 == 1) {
        for(int j = x ; j < (n + x); j++) cout << v[j] << " ";
        x += n;
        cout << endl;
      }
      else {
        for(int j = x + n - 1 ; j >= x ; j--) cout << v[j] << " ";
        x += n;
        cout << endl;
      }
    }
  }
  return 0;
}
