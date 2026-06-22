#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

struct animal{
  int lion;
  int tiger;
};

int main(){
  int *p1;
  float *p2;
  char *p3;
  double *p4;
  long unsigned *p5;
  signed *p6;
  struct animal *p7;

  cout << sizeof(p1) << endl;
  cout << sizeof(p2) << endl;
  cout << sizeof(p3) << endl;
  cout << sizeof(p4) << endl;
  cout << sizeof(p5) << endl;
  cout << sizeof(p6) << endl;
  cout << sizeof(p7) << endl;
}