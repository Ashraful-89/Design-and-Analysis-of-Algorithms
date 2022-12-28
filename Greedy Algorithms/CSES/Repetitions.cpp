#include <bits/stdc++.h>
using namespace std;

int main() 
{
  string str;
  cin >> str;
  int len =  str.length();
  int cnt = 1 ;
  vector<int> v;
  int flag = 1;
  char ch = str[0];
    for(int j = 1; j < len ; j++) {
      if(ch == str[j]){
        ++cnt;
      }
      else {
        ch = str[j];
        // cout << cnt << " ";
        v.push_back(cnt);
        cnt = 1;
      }
      
    }
  v.push_back(cnt);
  cout << *max_element(v.begin() , v.end()) << endl;
  // cout << str << endl;
  return 0;
}