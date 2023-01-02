#include <iostream>
using namespace std;

int main() 
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    if( a <= (b / 2) && a <= (c / 4)) {
      cout << a + a * 2 + a * 4 << endl; 
    }
    else if (b / 2 <= a && b / 2 <= c / 4){
      cout << 7 * ( b / 2) << endl;
    }
    else {
      cout << 7 * (c / 4) << endl; 
    }
    return 0;
}
