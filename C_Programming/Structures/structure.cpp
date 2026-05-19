#include<stdio.h>
#include<iostream>

using namespace std;

struct Rectangle {
  int length;
  int breadth;
} r;

int main(){

  r.length = 10;
  r.breadth = 20;

  cout << r.length << endl;
  cout << sizeof(r.breadth) << endl;

}