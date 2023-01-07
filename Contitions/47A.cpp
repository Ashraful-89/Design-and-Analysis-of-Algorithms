#include <bits/stdc++.h>
using namespace std;

int main() 
{
    set <int> vec;
    int n;
    cin >> n;
    
   
    for(int i = 0; i <= 100; i++) {
        int sum = 0;
        for(int j = 0 ; j <= i; j++) {
           sum = sum + j;
        }
        vec.insert(sum);
    }
    auto it = vec.find(n);
    if(it != vec.end()) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
