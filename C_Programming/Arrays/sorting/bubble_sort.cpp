#include <iostream>
#include <stdio.h>

using namespace std;

// Bubble sort

int main()
{
  int arr[] = {7, 8, 9, 3, 6, 4, 1, 0};
  int n = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j - n - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  for (int i = 1; i < n - 1; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}