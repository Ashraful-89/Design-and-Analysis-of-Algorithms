#include <iostream>
using namespace std;
 
int main() 
{
  int n,m,z ;
  int cnt = 0 ;
  cin >> n >> m >> z;
  for(int i = n ; i <= z ; i+=n){
    for(int j = m ; j <= i ; j +=m)
    if(i == j ) cnt++;
  }
  cout << cnt << endl;
  return 0;
}
