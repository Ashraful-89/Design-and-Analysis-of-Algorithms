#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int s = 0 , d = 0, flag = 1;
    while(!v.empty()) {
        if(flag == 1) {
            if(v[0] > v.back()) {
                s = s + v[0];
                v.erase(v.begin());
            }
            else {
                s += v.back();
                v.pop_back();
            }
            flag = 2;
        }
        else {
            if(v[0] > v.back()) {
                d = d + v[0];
                v.erase(v.begin());
            }
            else {
                d += v.back();
                v.pop_back();
            }
            flag = 1;

        }
    }
    cout << s << " " << d << endl;
    return 0;
}