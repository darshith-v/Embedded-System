#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;
//count even and odd number exits

int main(){
  vector<int> arr = {1,2,3,4,5,6,7,8,9};
  int Even = 0;
  int Odd = 0;
  int length = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < arr.size(); i++){
    if(arr[i] % 2 == 0){
      Even++;
    }else{
      Odd++;
    }
  }
  printf("Even = %d\nOdd = %d\n", Even, Odd);
  cout <<"Even = " <<Even << "\n" <<"Odd = "<< Odd << endl;
}