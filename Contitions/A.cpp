#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
  int year ;
  cin >> year ;
  
  while(true){
      year++;
      set <int> s;
      int temp1;
      temp1 = year;
      while(temp1) {
      s.insert(temp1%10);
      temp1 = temp1 / 10;
      }
      if(s.size() == 4 ){
      //cout << count << endl;
      cout << year << endl;
      break;
       
    }
  }
 return 0;
}
