#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
  int a = 10;

  int *p = &a;

  printf("%d\n", a);  // a = 10
  printf("%d\n", p);  // xHAEFASDF2
  printf("%d\n", *p); // *p = 10
}