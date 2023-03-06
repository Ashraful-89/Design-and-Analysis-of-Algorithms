#include <iostream>
using namespace std;

int main() 
{
  int t;
  cin >> t;
  while(t--) {
    int n, m,s1,s2,d;
    cin >> n >> m >> s1 >> s2 >> d;
    
    int x1 = s1 - d;
    int x2 = s1 + d;
    int y1 = s2 - d;
    int y2 = s2 + d;
    if((x1 > 1 && y2 < m) ||  (y1 > 1 ) && (x2 < n)) cout << (n-1) + (m - 1) << endl;
    
    else cout << "-1" << endl;
  }
    return 0;
}
