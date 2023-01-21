#include<bits/stdc++.h>
using namespace std;

int main() {
    vector < double > myVector;
    int n;
    cout << "Enter Size : "; cin >> n;
    double x;
    for(int i = 0; i < n ; i++) {
        cin >> x;
        myVector.push_back(x);
    }

    cout << "The vector element in reverse : ";

    for(auto it = myVector.rbegin(); it != myVector.rend() ; ++it) {
        cout << *it << " ";
    }

    cout << "\nContent of first element : " << (*myVector.cbegin()) << endl;
    cout << "\nContent of last element : " << *(myVector.cend() - 1) << endl;


    // print the vector element in the reversely 
    cout << "The reversely element of the vewctor : ";
    for(auto it = ( myVector.cend() - 1 ) ; it >= myVector.cbegin() ; --it){
        cout << *it << " ";
    }
}
