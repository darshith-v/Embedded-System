#include<iostream>
#include<stdio.h>

using namespace std;

// Revese an array

int main(){
  int n;
  cout << "Enter the size of the array:";
  cin >> n;

  int arr[n];
  cout << "Enter the elements of the array:" << endl;
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  cout << "The elements of the array are:" << endl;
  for (int i = n - 1; i >= 0; i--)
  {
    cout << arr[i] << endl;
  }
}
