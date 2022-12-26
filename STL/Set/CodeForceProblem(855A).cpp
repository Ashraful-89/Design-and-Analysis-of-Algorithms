#include<bits/stdc++.h>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    set < string > str;
    string str1[n] ;
    for(int i = 0 ; i < n; i++) {
        cin >> str1[i];
    }
    
    for(int i = 0; i < n; i++) {
        if(str.insert(str1[i]).second) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }

    }
    return 9;
}