#include<bits/stdc++.h>
using namespace std ;
int main(void) {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin() , v.end());
    int size = unique(v.begin() , v.end()) - v.begin();
    if(size >= 2) {
        cout << *(v.begin() + 1) << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}