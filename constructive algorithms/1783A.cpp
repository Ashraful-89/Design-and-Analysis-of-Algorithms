#include<bits/stdc++.h>

using namespace std;

int main() {
  int test;
  cin >> test;
  while(test--) {
    int n;
    cin >> n;
    int same = 1;
    int a[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      if(a[i] != a[0])
      same = 0;
    }
    if(same == 1) {
      cout << "NO" << endl;
    }
    else {
      sort(a , a + n , greater<int>());
      cout << "YES" << endl;
      if(a[1] == a[0]) swap(a[0] , a[n-1]);
      for(int i = 0; i < n; i++) cout << a[i] << " ";
      cout << endl;
    }
  }
  return 0;
}
