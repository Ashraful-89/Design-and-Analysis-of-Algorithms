#include <iostream>
using namespace std;
int table[100][100];
int main() 
{
  int n,k;
  cin >> n >> k;
  for(int i = 0 ; i < n; i++) {
        table[i][i] = k;
  }
  for(int i = 0; i < n ; i++) {
    for(int j = 0 ; j < n; j++) {
      cout << table[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
