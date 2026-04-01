#include <stdio.h>

int main()
{
  int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int length = sizeof(arr) / sizeof(arr[0]);
  int max = 0;

  for (int i = 0; i < length; i++)
  {
    if (max > arr[i])
    {
      return max;
    }
    else
    {
      max = arr[i];
    }
  }
  printf("The largest number in the array is : %d\n", max);
}