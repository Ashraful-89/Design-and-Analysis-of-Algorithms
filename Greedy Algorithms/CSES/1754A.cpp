#include <iostream>
using namespace std;

int main() 
{
  int n ;
  cin >> n;
  while (n--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0; i < n; i++) {
      if(s[i] == 'Q') cnt1++;
      else {
        cnt2++;
        if(cnt1 >= cnt2){
             cnt1 = cnt1 - cnt2;
             cnt2 = 0;
        }
        else {
          cnt1 = 0;
          cnt2 = 0;
        }
      }
    }
    if(cnt2 >= cnt1 ) cout << "YES" << endl;
    else cout << "NO" << endl;
    
  }
   
    return 0;
}
