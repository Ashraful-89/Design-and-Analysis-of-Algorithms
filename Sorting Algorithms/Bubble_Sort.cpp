#include <bits/stdc++.h>
using namespace std;


void bubble_Sorted(int a[] , int n){
  int i , j;
  bool flag = false;
  for(int i = 0; i < n - 1; i++){
    flag = flag;
    for(int j = 0; j < n - i - 1; j++){
      if(a[j] > a[j+1]){
        swap(a[j] , a[j+1]);
        flag = true;
      }
    }
    if(flag == false) {
      break;
    }
  }
  
}

void PrintedArray(int a[] , int n){
  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  
}
int main() 
{
    int arr[] = { 1, 0 , 3 , 6,  3, 5};
    int n = sizeof(arr)/ sizeof(arr[0]);
    bubble_Sorted(arr,n);
    cout << "The Printed Sorted array : " << endl;
    PrintedArray(arr , n);
    return 0;
}
