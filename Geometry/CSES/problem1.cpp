#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
  long long  t;
  cin >> t;
  // cout << 6*t << endl;
  while(t--) {
    long long x1,x2,x3,y1,y2,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double m1 = (y2 - y1)* (x3-x2);
    double m2 = (y3 - y2)*(x2-x1);
    if(m1 < m2) cout << "LEFT" << endl;
    else if(m1 > m2) cout << "RIGHT" << endl;
    else cout << "TOUCH" << endl;
  }
  return 0;
}
