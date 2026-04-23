#include <iostream>
#include <stdio.h>

using namespace std;

// In binary search array should be sorted first.

int main()
{
  int arr[] = {2, 10, 14, 25, 38, 41, 50, 61, 89, 90};
  int search = 61;

  int length = sizeof(arr) / sizeof(arr[0]);

  int low = 0;
  int high = length - 1;

  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (arr[mid] == search)
    {
      cout << "Element found at index: " << mid << " with value: " << arr[mid] << endl;
      break;
    }
    else if (arr[mid] < search)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
}
