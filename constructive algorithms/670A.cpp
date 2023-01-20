#include <iostream>
using namespace std;

int main() 
{
  int n ;
  cin >> n;
  if(n % 7 == 0) cout << 2 * (n / 7) << " " << 2 * (n / 7) << endl;
  else if (n % 7 == 1){
    cout << 2 * (n / 7) << " " << 2 * (n / 7) + 1 << endl;
  }
  else if(n % 7 == 6) {
    cout << 2 * (n / 7) + 1 << " " << 2 * (n / 7) + 2 << endl;
  }
  else {
    cout << 2 * (n / 7) << " " << 2 * (n / 7) + 2 << endl;
  }
  return 0;
}
