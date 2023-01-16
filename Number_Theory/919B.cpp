#include <iostream>
using namespace std;
int sumOfDigit(int n) {
  int sum = 0;
  while(n) {
    sum = sum + n % 10;
    n = n / 10;
  }
  return sum;
}
int main() 
{
  
    int k;
    cin >> k;
    int cnt = 0;
    for(long long int i = 19 ; i < 100000000; i++) {
        if(sumOfDigit(i) == 10) {
            cnt++;
            if(cnt == k) {
              cout << i << endl;
              return 0;
            }
        }
    }
}
