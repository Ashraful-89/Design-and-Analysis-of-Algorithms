#include <bits/stdc++.h>
using namespace std;

int main() 
{
    vector<vector<int>> vect {
      {1, 2, 3},
      {5,6,7},
      {1,4,5}
    };
    
    for(int i = 0; i < vect.size(); i++) {
      for(int j = 0; j < vect.size(); j++) {
        cout << vect[i][j] << " ";
      }
      cout << endl;
    }
    vect[2].push_back(10);
    vect[1].push_back(10);
    vect[0].push_back(10);
    
    cout << "Print all value another process : \n";
    for(vector <int> v : vect) {
      for(auto a : v) {
        cout << a << " ";
      }
      cout << endl;
    }
    return 0;
}
