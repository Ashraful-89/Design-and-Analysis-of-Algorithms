#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int m, d;
    cin >> m >> d;
    d = 7 - d + 1;
    if(m == 4 || m == 6 || m == 9 || m == 11) {
      int cnt = 1;
      for(int i = d ; (i / 30 <= 0) ; i = i + 7) cnt++;
      cout << cnt << endl;
    }
    else if (m == 2) {
      int cnt = 1;
      for(int i = d ; (i / 28 <= 0); i = i + 7) cnt++;
      cout << cnt << endl;
    }
    else {
      int cnt = 1;
      for(int i = d ; (i / 31 <= 0) ; i = i + 7) cnt++;
      cout << cnt << endl;
    }
    return 0;
}
