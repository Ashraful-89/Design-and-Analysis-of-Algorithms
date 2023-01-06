#include <iostream>
using namespace std;

int main() 
{
  int a, b, c;
  
  int cnt = 0,cnt1 = 0;
  for(int i = 0 ; i < 3; i++) {
    cin >> a;
    if(a == 5) cnt++;
    if(a == 7) cnt1++;
  }
  if(cnt == 2 && cnt1 == 1) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
