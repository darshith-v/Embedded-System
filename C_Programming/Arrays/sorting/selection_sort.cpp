#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
  int arr[] = {5, 8, 9, 0, 3, 6, 1, 2};
  int n = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < n - 1; i++){
    int min = i;

    for (int j = i + 1; j < n; j++){
      if(arr[j] < arr[min]){
        min = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }

  for (int i = 0; i < n - 1; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}