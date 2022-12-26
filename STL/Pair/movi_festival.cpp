#include<bits/stdc++.h>
using namespace std;

int a[200];
int main() {
    // int t;
    // cin >> t;
    // while(t--) {
    //     int n;
    //     cin >> n;
    //     for(int i = 0; i < n; i++) {
    //         cin >> a[i];
    //     }
    //     vector<pair<int,int>> v;
    //     int k;
    //     cin >> k;
    //     for(int i = 0; i < n; i++ ) {
    //         for( int j = 0; j < n; j++ ) {
    //             if(i != j && a[i] - a[j] == k ) {
    //                 v.push_back({a[i] , a[j]});
    //             }
    //         }
    //     }
    //     sort(v.begin() , v.end());
    //     int size = unique(v.begin() , v.end()) - v.begin();
    //     for(int i = 0; i < size ; i++) {
    //         cout << v[i].first << " " << v[i].second << endl;
    //     }
    //  cout << size << endl;

    // }

    int n;
    cin >> n;
    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++) {
        int x , y;
        cin >> x >> y;
        v.push_back({y,x});
    }
    sort(v.begin(),v.end());
    int cnt = 1;
    int temp;
    temp = v[0].first;
    for(int i = 1; i < v.size(); i++) {
        
        if(temp <= v[i].second) {
            temp = v[i].first;
            cnt++;
        } 
        // cout << v[i].first << " " << v[i].second << endl;
        // cout << v[i-1].first << " " << v[i-1].second << endl;
    }
    cout << cnt << endl;
    
    return 0;
}