#include<stdio.h>
#include<iostream>

using namespace std;

struct game{
  int length;
};

int main(){
  struct game g;
  struct game *ptr = &g;

  cout << ptr << endl;
}
