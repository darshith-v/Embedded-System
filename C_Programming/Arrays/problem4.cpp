#include <stdio.h>
#include <iostream>

using namespace std;

// second largest number in an array;
int main()
{
  int arr[5] = {4, 9, 8, 6, 5};
  int largest = arr[0];
  int second_largest = arr[0];
  int length = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < length; i++)
  {
    if (arr[i] > largest)
    {
      second_largest = largest;
      largest = arr[i];
    }
    else if (arr[i] < largest && arr[i] > second_largest)
    {
      second_largest = arr[i];
    }
  }
  cout << second_largest << endl;
  printf("%d\n", second_largest);
}