#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
  int arr[] = {8, 3, 5, 1, 9, 12, 0, 4, 2, 10};
  int length = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < length; i++){
    for (int j = i + 1; j < length; j++){
      if(arr[i] > arr[j]){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }

  for (int i = 0; i < length; i++){
    cout << arr[i] << endl;
  }
}