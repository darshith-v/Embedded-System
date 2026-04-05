#include<iostream>
#include<vector>

using namespace std;

//remove duplicate elements

int main(){
  // vector<int> unique;
  int arr[] = {1, 2, 2, 3, 3, 4, 5, 5};
  int length = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < length - 1; i++){
    for(int j = i + 1; j < length - 1; j++){
      if(arr[i] == arr[j]){
        arr[j] = arr[j + 1];
        length--;
      }
    }
  }
}