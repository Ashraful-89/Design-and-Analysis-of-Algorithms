#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin >> n;
  int m = 0 , c = 0;
  int a , b;
  for(int i = 0; i < n; i++) {
    cin >> a >> b;
    if(a > b) m++;
    if( a < b) c++;
  }
  if( m > c ) cout << "Mishka" << endl;
  else if( m < c) cout << "Chris" << endl;
  else cout << "Friendship is magic!^^" << endl;
  return 0;
}
